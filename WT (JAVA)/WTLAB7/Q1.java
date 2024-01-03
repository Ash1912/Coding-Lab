import java.util.Scanner;
abstract class student
{
     int rollno,rgno;
    abstract void course();
}
class kiitian extends student
{
     Scanner sc=new Scanner(System.in);
    void course() 
	{
       System.out.println("---------Enter Student Details---------");
       System.out.println("Enter the Registration Number of the Student: ");
       rgno =sc.nextInt();
       System.out.println("Enter the Roll Number: ");
       rollno=sc.nextInt();
    }
    void display() 
   {
       System.out.println("\n---------Displaying Student Details----------"); 
       System.out.println("The Registration No. of the Student is "+rgno);  
       System.out.println("The Roll No. of the Student is "+rollno); 
   }
}
public class Q1 
{
   public static void main(String[] args) 
   {
      kiitian oKiitian=new kiitian();
      oKiitian.course();
      oKiitian.display();
   }
}