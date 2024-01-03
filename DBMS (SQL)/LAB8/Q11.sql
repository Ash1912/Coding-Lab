DECLARE 
   Test_String string(10) := 'Ashish'; 
BEGIN 
   dbms_output.put_line('STUDENT NAME IN UPPERCASE IS :' || UPPER(Test_String)); 
   dbms_output.put_line('STUDENT NAME IN LOWERCASE IS:' || LOWER(Test_String)); 
END; 
/