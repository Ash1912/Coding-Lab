BEGIN
UPDATE Emp_cursor SET SALARY=SALARY*1.15
WHERE EMP_ID=&EMP_ID;
IF SQL%FOUND THEN
DBMS_OUTPUT.PUT_LINE('MODIFIED');
END IF;
IF SQL%NOTFOUND THEN
DBMS_OUTPUT.PUT_LINE('NOT MODIFIED');
END IF;
END;
/