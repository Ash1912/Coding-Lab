Declare
a int;
begin
a:=&a;
if (MOD (a,100)=0) then
dbms_output.put_line('Money is multiple of 100');
else
dbms_output.put_line('Money is not a  multiple of 100');
end if;
end;
/