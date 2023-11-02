library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL ;


entity safe is
generic ( fclk : integer := 1000;
          nod : integer := 4 ;	
          T : integer := 30_000			 ) ;
port (rst,clk : in std_logic ;
       key : in std_logic_vector(3 downto 0) ;
		 output : out std_logic ) ;
end safe;

architecture Behavioral of safe is
type state is (locked,unlocked,get_key,set_key,verify) ;
signal pr_st,nx_st : state ;
type oneDoneD is array(natural range <> ) of std_logic_vector(3 downto 0) ;
signal password : oneDoneD(1 to nod) := ( others => "0001") ;
signal entry : oneDoneD(1 to nod) := (others => "0000") ;
signal input_digits : integer range 0 to nod ;
signal timer : integer range 0 to T := 0 ;
signal flag : std_logic := '0' ;
begin

flag_generator : process(rst,clk)
begin
 if (rst='1') then
  flag <= '0' ;
 elsif (clk'event and clk='1') then
  if (key="1111") then
   flag <= '1' ;
  else
   flag <= '0' ;
  end if ;
 end if ;  
end process;

lower_section : process(rst,clk)
 variable cnt : integer range 0 to T := 0 ;
begin
 if (rst='1') then
  pr_st <= locked ;
  cnt := 0 ;
 elsif ( clk'event and clk='1') then
  cnt := cnt + 1 ;
  if (cnt>=timer) then
   pr_st <= nx_st ;
   cnt := 0 ;
  end if ;
 end if ;
end process ; 

upper_section : process(pr_st,key,flag)
 variable d : integer range 0 to nod ;
 variable check : std_logic ;
begin
 case pr_st is
 
  when locked =>
   output <= '0' ;
	timer <= 1 ;
	d := 0 ;
	if (key = "1010" and flag='1') then
	 nx_st <= get_key ;
	else
    nx_st <= locked ;	
	end if ;

  when unlocked =>
   output <= '1' ;
	timer <= 1 ;
	d := 0 ;
	if (key = "1010" and flag='1') then
	 nx_st <= locked ;
	elsif (key = "1011" and flag='1') then
    nx_st <= set_key ;
   else
    nx_st <= unlocked ;	
	end if ;
	
	when get_key =>
	 output <= '0' ;
	 if ( ( (conv_integer(key))<10 ) and flag='1' ) then
	  d := d+1 ;
	  entry(d) <= key ;
	  if (d<nod) then
      timer <= T ;
      nx_st <= locked ;
     elsif (d=nod) then
      timer <= 1 ;
      nx_st <= verify ;
     end if ;		
    else
     timer <= T ;
     nx_st <= locked ;	  
    end if ;
	 
   when set_key =>
    output <= '0' ;
	 timer <= 1 ;
    if ( ( (conv_integer(key))<10 ) and flag='1' ) then
     d := d+1 ;
	  password(d) <= key ;
     if (d < nod) then 	  
	   nx_st <= set_key ;
	  elsif (d = nod) then
      nx_st <= unlocked ;
     end if ;
    else
     nx_st <= set_key ;
    end if ;

    when verify =>
     output <= '0' ;
     timer <= 1 ;
     check := '1' ;
     for i in 1 to nod loop 
      if (entry(i) /= password(i)) then
       check := '0' ;
		 entry(i) <= "0000" ;
      end if ;
     end loop ;		
     if ( check = '1' ) then
	   nx_st <= unlocked ;
	  elsif ( check = '0' ) then
      nx_st <= locked ;
     end if ;		
  
 
 end case ;
 
 input_digits <= d ;
end process;

end Behavioral;

