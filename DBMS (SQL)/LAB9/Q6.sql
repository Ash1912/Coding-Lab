DECLARE
vname EMP_CURSOR.emp_name%TYPE;
vdesg EMP_CURSOR.designation%TYPE;
did NUMBER(2);
CURSOR empcr(deptno EMP_CURSOR.dept_no%TYPE) IS SELECT
emp_name, designation FROM EMP_CURSOR WHERE dept_no=deptno;
BEGIN
did: =&did;
OPEN empcr(did);
DBMS_OUTPUT.PUT_LINE('Employee in dept.'||did);
LOOP
FETCH empcr INTO vname, vdesg;
EXIT WHEN empcr%NOTFOUND;
DBMS_OUTPUT.PUT_LINE(vname||''||vdesg);
END LOOP;
CLOSE empcr;
END;
/