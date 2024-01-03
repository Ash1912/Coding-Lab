Declare
    a number;
    b number;
    c number;
    d number;
Begin
    dbms_output.put_line('Enter a:');
        a:=&a;
    dbms_output.put_line('Enter b:');
        b:=&b;
    dbms_output.put_line('Enter c:');
        c:=&C;
        dbms_output.put_line('Enter d:');
        d:=&d;
if (a<b) and (a<c) and (a<d)
    then
    dbms_output.put_line('A is Smallest'||A);
elsif (b<a) and (b<c) and (b<d)
    then
    dbms_output.put_line('B is smallest'||B);
elsif (c<a) and (c<b) and (c<d)
    then
    dbms_output.put_line('C is smallest'||C);
 else
    dbms_output.put_line('d is smallest'||d);
    End if;
End;
/