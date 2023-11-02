
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL ;


entity safe is
generic ( fclk : integer := 1000 ;
          nod : integer := 4 ;	
          T : integer := 30_000			 ) ;
port (rst,clk : in std_logic ;
       key : in std_logic_vector(3 downto 0) ;
		 output : out std_logic ) ;
end safe;

architecture Behavioral of safe is
type state is (locked,unlocked,get_key,set_key,wait1,verify) ;
signal pr_st,nx_st : state ;
type oneDoneD is array(natural range <> ) of std_logic_vector(3 downto 0) ;
signal password : oneDoneD(1 to nod) := ( others => "0001") ;
signal entry : oneDoneD(1 to nod) := (others => "0000") ;
signal input_digits : integer range 0 to nod ;
signal timer : integer ;
signal flag : std_logic := '0' ;
begin

process(rst,clk)

begin
 if(rst='1') then
  pr_st <= locked ;
  timer <= 0 ;
 elsif(clk'event and clk='1') then
  pr_st <= nx_st ;
  if(flag='1') then
   timer <= timer + 1 ;
	if(timer>=T)then
	 timer <= 0;
	end if ; 
  elsif(flag='0') then
   timer <= 0 ;
  end if ;	
 end if ;
end process ; 



process(pr_st,key,timer)
variable st_s : state ;
variable d : integer range 0 to nod ;
variable check : std_logic ;
begin

 case pr_st is
 
 
  when locked =>
   output <= '0' ;
	d := 0 ;
	if(key = "1010") then 
	 nx_st <= wait1 ;
	 st_s := get_key ;
	 flag <= '1' ;
	else
    nx_st <= locked ;
	 flag <= '0' ;
	end if ; 
	
	
  when unlocked =>
   output <= '1' ;
	d := 0 ;
	if(key = "1011") then
	 nx_st <= wait1 ;
	 st_s := set_key ;
	elsif(key = "1010") then
    nx_st <= wait1 ;
    st_s := locked ;	 
	else
	 nx_st <= unlocked ;
	end if ;

	
  when get_key =>
   output <= '0' ;
	if(timer>=T)then
	 nx_st <= locked ;
	 flag <= '0' ;
	else 
	if( (conv_integer(key)) < 10 ) then
	 d:= d+1 ;
	 entry(d) <= key ;
	 nx_st <= wait1 ;
	 if(d < nod) then
	  st_s := get_key ;
	 elsif(d=nod) then
	  st_s := verify ;
	  flag <= '0' ;
	 end if ;   
   else
	 nx_st <= get_key ;
	end if ;
   end if ; 	
 
  when verify =>
     output <= '0' ;
     check := '1' ;
	  for i in 1 to nod loop
	   if(entry(i) /= password(i) ) then
		 check := '0' ;
		end if ;
		entry(i) <= "0000" ;
     end loop ;		
     if(check = '1') then
      nx_st <= unlocked ;
     elsif(check = '0' ) then
      nx_st <= locked ;
     end if ;
     	  
	
  when set_key =>
   output <= '0' ;
   if( (conv_integer(key)) < 10 ) then
	 d:= d+1 ;
	 password(d) <= key ;
	 nx_st <= wait1 ;
	 if(d < nod) then
	  st_s := set_key ;
	 elsif(d=nod) then
     st_s := unlocked ;		
	 end if ; 
   else
	 nx_st <= set_key ;
	end if ; 	


	
	
  when wait1 =>
   output <= '0' ;
	if(timer>=T)then
	 nx_st <= locked ;
	 flag <= '0' ;
	else 
	
	if (key = "1111") then
	 nx_st <= st_s ;
	else
    nx_st <= wait1;
   end if ;
	
   end if ;
   
	
 end case ;   	

 input_digits <= d ;
end process ;

end Behavioral;

