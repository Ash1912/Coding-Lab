CREATE TABLE LAB8Q8_table
(id NUMBER(4),
salary NUMBER(10));
BEGIN
FOR idx IN 1..10 LOOP
INSERT INTO LAB8Q8_table(ID,salary)
VALUES(idx, --ID value
DBMS_RANDOM.VALUE(7000,8000));
END LOOP
COMMIT;
END;
/
SELECT id,salary FROM LAB8Q8_table;
DECLARE
CURSOR my_cursor IS
SELECT AVG(salary) AS avg_salary
FROM LAB8Q8_table;
c_my_cursor_rec my_cursor%ROWTYPE;
BEGIN
OPEN my_cursor;
LOOP
FETCH my_cursor INTO c_my_cursor_rec;
EXIT WHEN my_cursor%NOTFOUND;
DBMS_OUTPUT.PUT_LINE('Average(salary) = '||c_my_cursor_rec.avg_salary);
END LOOP;
CLOSE my_cursor;
END;
/