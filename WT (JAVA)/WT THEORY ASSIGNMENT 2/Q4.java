// Create a program to check if an area pin code is correct/ valid or not. If it is invalid then it should raise 
// user defined exceptions. Check for correctness of pin code and length of pin code.
import java.util.regex.*;
import java.util.Scanner;
class Q4{
public static boolean isValid(String s)
{
Pattern p = Pattern.compile("[1-9][0-9]{5}");
Matcher m = p.matcher(s);
return (m.find() && m.group().equals(s));
}
public static void main(String[] args)
{
System.out.print("Enter Pin Code: ");
Scanner sc = new Scanner(System.in);
String s = sc.next();
sc.close();
try
{
if (isValid(s))
System.out.println("Valid Pin Code");
else
throw new Exception("0");
}
catch(Exception ex) {
System.out.println("Invalid Pin Code");
}
}
}