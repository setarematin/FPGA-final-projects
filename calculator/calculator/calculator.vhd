library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

package my_pkg is 
type data is array(natural range <>) of std_logic_vector(6 downto 0) ;
end package ;

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;
use work.my_pkg.all;

entity calculator is
generic ( nod : natural := 5 ;  --- number of digits ------
          nob : natural := 20 ) ;  ---- number of bits : 99999 has 20 bits ------
port(clr : in std_logic ;
     key : in std_logic_vector(3 downto 0);
	  output : out data(nod+1 downto 1) ) ;	
end calculator;

architecture Behavioral of calculator is

function to_ssd(inp : signed ) return std_logic_vector is
variable ss : std_logic_vector(6 downto 0) ;
begin
if (inp=0) then
ss:= "1111110" ;
elsif (inp=1) then
ss:= "0110000" ;
elsif (inp=2) then
ss:= "1101101" ;
elsif (inp=3) then
ss:= "1111001" ;
elsif (inp=4) then
ss:= "0110011" ;
elsif (inp=5) then
ss:= "1011011" ;
elsif (inp=6) then
ss:= "1011111" ;
elsif (inp=7) then
ss:= "1110000" ;
elsif (inp=8) then
ss:= "1111111" ;
elsif (inp=9) then
ss:= "1111011" ;
else
ss:= "0000000" ;
end if ;
return ss;
end function ;
signal key_s : signed (4 downto 0) ;
signal flag,flag_clr : std_logic := '0' ;
signal a,b : signed(nob downto 0) := (others => '0' ) ;
signal operation : std_logic_vector(2 downto 0) := (others => '0' ) ;
type state is ( get_num , get_op ) ;
signal st : state := get_num ;
signal clr_when_set : std_logic := '0' ;
signal flag_error : std_logic := '0' ;
signal op : data(nod+1 downto 1) := (1=>"1111110",others=>"0000000") ;
begin


key_s <= signed('0' & key);

flag_generator : process(key_s)
begin
if (key_s=15) then 
flag <= '1' ;
else
flag <= '0' ;
end if ;
end process;

flag_generator2 : process(clr)
begin
if (clr='0') then 
flag_clr <= '1' ;
else
flag_clr <= '0' ;
end if ;
end process;

main_section : process(key_s,clr)

variable temp1 : signed(2*nob+1 downto 0) ; 
variable temp2 : signed(nob downto 0) ; 
begin

if (clr='1' and flag_clr='1') then
a<=(others =>'0');b<=(others =>'0');operation<=(others =>'0');
clr_when_set<='0';
flag_error<='0' ;
st<=get_num;
end if ;

case st is

when get_num =>
if ((key_s<10) and (flag='1')) then
if (clr_when_set='1') then
temp2 := (others=>'0') ;
temp2 := temp2 + key_s ;
a <= temp2 ;
clr_when_set <= '0' ;
flag_error <= '0' ;
else
temp1 := (a*10)+(key_s) ;
a <= temp1(nob downto 0) ;
end if ;
end if ;
if ( ((key_s>=10)and(key_s<=13)) and (flag='1') ) then
clr_when_set <= '0' ;
if (operation /= "000") then
case operation is
when "001" =>
temp2 := b + a ;
a <= temp2 ;
when "010" =>
temp2 := b - a ;
a <= temp2 ;
when "011" =>
temp1 := b * a ;
a <= temp1(nob downto 0) ;
when "100" =>
if ( a /= 0 ) then
temp2 := b / a ;
a <= temp2 ;
else
flag_error <= '1' ;
clr_when_set <= '1' ;
end if ;
when others => null ;
end case ;
b <= (others => '0') ;
end if ;
case key_s is
when "01010" => operation<="001";
when "01011" => operation<="010";
when "01100" => operation<="011";
when "01101" => operation<="100";
when others => null;
end case;
st <= get_op ;
end if ;
if ((key_s=14)and(flag='1')) then
if (operation /= "000") then
case operation is
when "001" =>
temp2 := b + a ;
a <= temp2 ;
when "010" =>
temp2 := b - a ;
a <= temp2 ;
when "011" =>
temp1 := b * a ;
a <= temp1(nob downto 0) ;
when "100" =>
if ( a /= 0 ) then
temp2 := b / a ;
a <= temp2 ;
else
flag_error <= '1' ;
clr_when_set <= '1' ;
end if ;
when others => null ;
end case ;
b <= (others => '0') ;
end if ; 
operation <= (others=>'0') ;
clr_when_set <= '1' ;
end if ;


when get_op =>
if ( ((key_s>=10)and(key_s<=13)) and (flag='1') ) then
case key_s is
when "01010" => operation<="001";
when "01011" => operation<="010";
when "01100" => operation<="011";
when "01101" => operation<="100";
when others => null;
end case;
end if ;
if ((key_s<10) and (flag='1')) then
b<=a;
temp2 := (others=>'0') ;
temp2 := temp2 + key_s ;
a <= temp2 ;
st <= get_num ;
end if ;
if ((key_s=14)and(flag='1')) then
clr_when_set <= '1' ;
operation <= (others => '0' ) ;
st <= get_num ;
end if ;

end case ;

end process ;

display : process(a,flag_error) 
variable digits,ct : integer := 0 ;
begin
if (flag_error='1') then
op <= (1=> "1001111",others => "0000000") ;
else
op(1) <= to_ssd( (abs(a)) mod 10 ) ;
digits := 1 ;
ct := 10 ;
for i in 2 to nod loop
if ( (abs(a)) >= ct ) then 
digits := digits+1 ; 
else
exit ;
end if ;
ct := ct * 10 ; 
end loop ;

for i in 2 to nod+1 loop
if (i<=digits) then
op(i) <= to_ssd( ( ( (abs(a)) / (10**(i-1))  ) mod 10 ) ) ;
elsif (i=(digits+1)) then
if ( a >= 0 ) then
op((digits+1)) <= "0000000" ;
else
op((digits+1)) <= "0000001" ;
end if ;
elsif(i>(digits+1)) then
op(i) <= "0000000" ;
end if ;
end loop ;

end if ;
end process;

output <= op ;

end Behavioral;

