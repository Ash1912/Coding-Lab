declare
a int:=8;
cube int;
square int;
begin
square:=a*a;
cube:= a*a*a;
dbms_output.put_line('The Cube of the number is'||cube);
dbms_output.put_line('The Square of number is' || square);
end;
/