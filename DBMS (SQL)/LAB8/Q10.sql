DECLARE
sumVal NUMBER;
n NUMBER;
i NUMBER;
FUNCTION Findmax(n IN NUMBER)
   RETURN NUMBER
IS
   sums NUMBER := 0;
BEGIN
   FOR i IN 1..n
   LOOP
   sums := (i*(i+1))/2;
   END LOOP;
   RETURN sums;
END;
BEGIN
   n := &n;
   sumVal := findmax(n);
   dbms_output.Put_line('Sum of natural numbers is ' || sumVal);
END;
/