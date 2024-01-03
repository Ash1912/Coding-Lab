declare
a number;
b number;
i number:=1;
s number:=0;
begin
dbms_output.put_line('Enter a:');
        a:=&a;
dbms_output.put_line('Enter b:');
        b:=&b;
while i<=b
loop
s:=s+a;
i:=i+1;
end loop;
dbms_output.put_line('product='||s);
end;
/