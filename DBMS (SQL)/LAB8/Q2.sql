DECLARE
	a	 NUMBER := 12;
	b	 NUMBER := 14;
	c	 NUMBER := 20;
	d	 NUMBER := 22;
    e	 NUMBER := 25;
    sumOf5 NUMBER;
	avgOf5 NUMBER;
BEGIN
	sumOf5 := a + b + c + d + e;
	avgOf5 := sumOf5 / 5;
	dbms_output.Put_line('Sum = '
						||sumOf5);
	dbms_output.Put_line('Average = '
						||avgOf5);
END;
/
