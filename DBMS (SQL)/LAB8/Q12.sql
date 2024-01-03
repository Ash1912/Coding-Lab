declare 
a number;
b number;
c number;
d number;
begin 
a:=&a;
b:=&b;
dbms_output.put_line('the entered range is : ' || a || ' to ' || b);
if (mod(a,2)=0)
 then 
 c:=a+1;
 while c<=b
 loop
 dbms_output.put_line(c);
 c:=c+2;
 end loop;
else 
 d:=a;
 while d<=b
 loop
 dbms_output.put_line(d);
 d:=d+2;
 end loop;
end if ;
end;
/