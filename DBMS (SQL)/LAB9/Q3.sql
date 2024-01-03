DECLARE
CURSOR CSR IS SELECT EMP_ID, SALARY FROM Emp_cursor
WHERE DEPT_NO='D05';
eid1 Emp_cursor.EMP_ID%TYPE;
sal1 Emp_cursor.SALARY%TYPE;
BEGIN
OPEN CSR;
IFCSR%ISOPEN :=
LOOP
FETCH CSR INTO eid1,sal1;
EXIT WHEN CSR%NOTFOUND;
IFCSR%FOUND :=
UPDATE Emp_cursor SET SALARY=SALARY*1.10 WHERE EMP_ID=eid1;
INSERT INTO Emp_raise VALUES(eid1, SYSDATE,
sal1*0.10);
END IF;
END LOOP;
COMMIT;
ELSE
DBMS_OUTPUT.PUT_LINE('Unable to open the cursor');
END IF;
CLOSE CSR;
END;
/