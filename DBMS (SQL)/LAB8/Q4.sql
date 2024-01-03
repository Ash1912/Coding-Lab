Declare
Age number;
Begin 
--Accept Age number prompt 'Enter your age : ';
dbms_output.put_line('Enter Age:');
Age := &Age;
IF Age >= 18 THEN 
dbms_output.Put_line( 'The user is eligible to cast vote'); 
ELSE 
dbms_output.Put_line( 'The user is not eligible to cast vote'); 
END IF; 
end; 
/