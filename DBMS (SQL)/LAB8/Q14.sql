 DECLARE
        n        INTEGER;
        temp_sum INTEGER;
        r        INTEGER;
   BEGIN
        n := &n;
        temp_sum := 0;
        WHILE n <> 0 LOOP
           r := MOD(n, 10);
           temp_sum := temp_sum + r;
           n := Trunc(n / 10);
       END LOOP;
       dbms_output.Put_line('sum of every digit  = '|| temp_sum);
   END;
   /
