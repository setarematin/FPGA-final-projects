library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;


entity clock is
generic(fclk : integer := 10 ;
        alarm_duration : integer := 60 ;
        init_hour : integer := 10 ;
        init_minute : integer := 10 ;
        init_second : integer := 0 ; 
        init_alarm_hour : integer := 6 ;
        init_alarm_minute : integer := 0 ;
        init_alarm_second : integer := 0 		  
		  ) ;
port(clk : in std_logic ;
     key : in std_logic_vector(3 downto 0) ;
	  alarm : out std_logic ;
	  hd,hy,md,my,sd,sy : out std_logic_vector(6 downto 0 ) ) ;
end clock;

architecture Behavioral of clock is

 type state is ( run , s_time , sc_alarm , s_alarm , wait1 ) ;
 signal pr_st,nx_st : state ;
 
 function int2ssd( inp1 : integer range 0 to 10) return std_logic_vector is
  variable ss : std_logic_vector(6 downto 0) ;
 begin
  case inp1 is
   when 0 => ss:= "1111110" ;
	when 1 => ss:= "0110000" ;
	when 2 => ss:= "1101101" ;
	when 3 => ss:= "1111001" ;
	when 4 => ss:= "0110011" ;
	when 5 => ss:= "1011011" ;
	when 6 => ss:= "1011111" ;
	when 7 => ss:= "1110000" ;
	when 8 => ss:= "1111111" ;
	when 9 => ss:= "1111011" ;
	when others => ss:= "0000000" ;
	end case ;
	return ss ;
 end function ;
 signal hour : integer range 0 to 24 := init_hour ;
 signal minute : integer range 0 to 60 := init_minute ;
 signal second : integer range 0 to 60 := init_second ;
 signal hour_entry : integer range 0 to 24 := 0 ;
 signal minute_entry,second_entry : integer range 0 to 60 := 0 ;
 signal alarm_hour : integer range 0 to 24 := init_alarm_hour ;
 signal alarm_minute : integer range 0 to 60 := init_alarm_minute ;
 signal alarm_second : integer range 0 to 60 := init_alarm_second ;
 signal key_int : integer range 0 to 15 ;
 signal clk_div : std_logic := '0' ;
 signal flag_set_time,flag_set_alarm,flag_alarm,flag_alarm_cancel : std_logic := '0' ;
 signal input_digits : integer := 0 ;
 
begin
 key_int <= conv_integer(key) ;
 
 
 clock_divider : process(clk)
  variable cnt : integer range 0 to fclk/2 ;
 begin
  if (clk'event and clk='1') then
   cnt := cnt + 1 ;
	if (cnt = fclk/2) then
	 clk_div <= not(clk_div) ;
	 cnt := 0 ;
	end if;
  end if ;	
 end process ;
 
 generating_time : process(clk_div,flag_set_time,flag_alarm_cancel)
 variable hour_temp : integer range 0 to 24 := init_hour ;
 variable minute_temp : integer range 0 to 60 := init_minute ;
 variable second_temp : integer range 0 to 60 := init_second ;
 variable cnt_alarm : integer range 0 to alarm_duration := 0 ;
 begin
 
 
 if (flag_set_time='1') then
  hour_temp := hour_entry ; minute_temp := minute_entry; second_temp := second_entry ;  
 elsif (flag_set_time='0') then
 
  if(clk_div'event and clk_div='1')then
  
   if(flag_alarm='1') then cnt_alarm := cnt_alarm + 1 ; end if ; 
  
   second_temp := second_temp + 1 ;
   if (second_temp=60) then
    second_temp := 0 ;
    minute_temp := minute_temp + 1 ;
    if (minute_temp=60) then
	  minute_temp := 0 ;
	  hour_temp := hour_temp + 1 ;
	   if (hour_temp=24) then
		 hour_temp := 0 ;
		end if ;
     end if ;
     end if ;	  
	
  end if ;
 end if ;
  hour <= hour_temp ; minute <= minute_temp ; second <= second_temp ; 
 
 if(flag_alarm_cancel='0') then
 if((hour_temp=alarm_hour) and (minute_temp=alarm_minute) and (second_temp=alarm_second)) then 
  flag_alarm <= '1' ;
  cnt_alarm := 0 ;
 end if ;
 if(cnt_alarm>=alarm_duration)then cnt_alarm := 0 ; flag_alarm <= '0' ; end if ;
 elsif(flag_alarm_cancel='1') then
  flag_alarm <= '0' ;
  cnt_alarm := 0 ;
 end if ; 

 
 end process ;
  
 setting_alarm : process(flag_set_alarm)
 begin
 if(flag_set_alarm='1') then
  alarm_hour<=hour_entry; alarm_minute<=minute_entry; alarm_second<=second_entry;
 end if ; 
 end process ;

 alarm <= '0' when flag_alarm='0' else '1' ;
 
 lower_section : process(clk)
 begin
  if(clk'event and clk='1')then
   pr_st <= nx_st ;
  end if ;	
 end process ;
 
 upper_section : process(pr_st,key_int,hour,minute,second)
 variable hour_entry_temp : integer range 0 to 24 := 0 ;
 variable minute_entry_temp,second_entry_temp : integer range 0 to 60 := 0 ;
 variable st_s : state ; 
 variable d : integer := 0 ;
 begin
 case pr_st is
  
 when run =>
 
 if (hour<10) then  hd <= int2ssd(10) ; else hd <= int2ssd(hour/10) ;  end if ; 
 hy <= int2ssd(hour mod 10) ;
 if (minute<10) then  md <= int2ssd(10) ; else md <= int2ssd(minute/10) ;  end if ;
 my <= int2ssd(minute mod 10) ;
 if (second<10) then  sd <= int2ssd(10) ; else sd <= int2ssd(second/10) ;  end if ;
 sy <= int2ssd(second mod 10) ;
 
 d:= 0 ;
 hour_entry <= 0 ; minute_entry <= 0 ; second_entry <= 0 ;
 
 if(key_int=10) then
 hd<=int2ssd(10);hy<=int2ssd(10);md<=int2ssd(10);my<=int2ssd(10);sd<=int2ssd(10);sy<=int2ssd(10);
 nx_st <= wait1 ;
 st_s := s_time ;
 hour_entry_temp := 0 ; minute_entry_temp := 0 ; second_entry_temp := 0 ;
 else
 nx_st <= run ;
 end if ;
 
 when s_time =>
 
 if(d>0) then
 if (hour_entry<10) then  hd <= int2ssd(10) ; else hd <= int2ssd(hour_entry/10) ;  end if ; 
 hy <= int2ssd(hour_entry mod 10) ;
 if (minute_entry<10) then  md <= int2ssd(10) ; else md <= int2ssd(minute_entry/10) ;  end if ;
 my <= int2ssd(minute_entry mod 10) ;
 if (second_entry<10) then  sd <= int2ssd(10) ; else sd <= int2ssd(second_entry/10) ;  end if ;
 sy <= int2ssd(second_entry mod 10) ;
 end if ;
 
 if(key_int < 10 ) then
 nx_st <= wait1 ;
 st_s := s_time ; 
 d := d+1 ;
  case d is
  when 2 => second_entry_temp := (second_entry_temp)+((key_int)*10) ;
  when 1 => second_entry_temp := (second_entry_temp)+(key_int) ;
  when 4 => minute_entry_temp := (minute_entry_temp)+((key_int)*10) ;
  when 3 => minute_entry_temp := (minute_entry_temp)+(key_int) ;
  when 6 => hour_entry_temp := (hour_entry_temp)+((key_int)*10) ;
  when 5 => hour_entry_temp := (hour_entry_temp)+(key_int) ;
  when others => null ;
  end case ;
  if(second_entry_temp>=60)then second_entry_temp := 59 ; end if ;
  if(minute_entry_temp>=60)then minute_entry_temp := 59 ; end if ;
  if(hour_entry_temp>=24)then hour_entry_temp := 23 ; end if ;
  hour_entry<=hour_entry_temp; minute_entry<=minute_entry_temp; second_entry<=second_entry_temp;
  
 elsif( key_int = 11 ) then 
 nx_st <= wait1 ;
 st_s := run ;
 flag_set_time <= '1' ;
  
 elsif((d=0) and (key_int=10)) then nx_st <= wait1; st_s := sc_alarm ; 
 
 else
 nx_st <= s_time ;
 
 end if ;
 
 
 
 when sc_alarm =>
  if ( key_int=12) then
   flag_alarm_cancel <= '1' ;
	nx_st <= wait1 ; 
	st_s := run ;
  elsif( key_int=11) then
  nx_st <= wait1 ;
  st_s := s_alarm ;
  hour_entry_temp := 0 ; minute_entry_temp := 0 ; second_entry_temp := 0 ;
  
  else 
   nx_st <= sc_alarm ;
	
  end if ; 



 when s_alarm => 
  
 if(d>0) then
 if (hour_entry<10) then  hd <= int2ssd(10) ; else hd <= int2ssd(hour_entry/10) ;  end if ; 
 hy <= int2ssd(hour_entry mod 10) ;
 if (minute_entry<10) then  md <= int2ssd(10) ; else md <= int2ssd(minute_entry/10) ;  end if ;
 my <= int2ssd(minute_entry mod 10) ;
 if (second_entry<10) then  sd <= int2ssd(10) ; else sd <= int2ssd(second_entry/10) ;  end if ;
 sy <= int2ssd(second_entry mod 10) ;
 end if ;
   
 if(key_int < 10 ) then
 nx_st <= wait1 ;
 st_s := s_alarm ; 
 d := d+1 ;
  case d is
  when 2 => second_entry_temp := (second_entry_temp)+((key_int)*10) ;
  when 1 => second_entry_temp := (second_entry_temp)+(key_int) ;
  when 4 => minute_entry_temp := (minute_entry_temp)+((key_int)*10) ;
  when 3 => minute_entry_temp := (minute_entry_temp)+(key_int) ;
  when 6 => hour_entry_temp := (hour_entry_temp)+((key_int)*10) ;
  when 5 => hour_entry_temp := (hour_entry_temp)+(key_int) ;
  when others => null ;
  end case ;
  if(second_entry_temp>=60)then second_entry_temp := 59 ; end if ;
  if(minute_entry_temp>=60)then minute_entry_temp := 59 ; end if ;
  if(hour_entry_temp>=24)then hour_entry_temp := 23 ; end if ;
  hour_entry<=hour_entry_temp; minute_entry<=minute_entry_temp; second_entry<=second_entry_temp;
  
 elsif( key_int = 11 ) then 
 nx_st <= wait1 ;
 st_s := run ;
 flag_set_alarm <= '1' ;
 
 else 
 nx_st <= s_alarm ;
 
 end if ;
 
 
 when wait1 =>
 flag_set_time <= '0' ;
 flag_set_alarm <= '0' ;
 flag_alarm_cancel <= '0' ;
 if(key_int=15)then
 nx_st <= st_s ;
 else
 nx_st <= wait1 ;
 end if ; 
 
 
 end case ;
 
 input_digits <= d ; 
 end process;
 

end Behavioral;

