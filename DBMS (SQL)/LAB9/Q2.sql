DECLARE
rowaff NUMBER(4);
BEGIN
UPDATE Emp_cursor SET SALARY=SALARY*1.15 WHERE DEPT_NO='D05';
rowaff:=SQL%ROWCOUNT;
IF rowaff>0 THEN
DBMS_OUTPUT.PUT_LINE(rowaff||' Employee
records modified');
ELSE
DBMS_OUTPUT.PUT_LINE('There is no employee
working for dept. 05');
END IF;
END;
/