import java.util.Scanner;
interface employee
{
   void earnings();
   void bonus();
   void deductions();
}
abstract class Manager implements employee
{
    int basic;
    public void earnings() 
    {
        int result=basic+(80*basic/100)+(15*basic/100);
        System.out.println("\nThe total Earning of the employee is "+result );
    }
    public void deductions() 
    {
        int result=12*basic/100;
        System.out.println("The total deductions is "+result);
    }
}
class substaff extends Manager implements employee
{
    public void bonus() 
    {
        int result=50*basic/100;
        earnings();
        deductions();
        System.out.println("The total bonus is  "+result);
    }  
}
public class Q3 
{
     public static void main(String[] args) 
     {
         substaff oSubstaff=new substaff();
         System.out.println("Enter the Basic Salary of the Employee: ");
         Scanner sc2=new Scanner(System.in);
         oSubstaff.basic=sc2.nextInt();
         oSubstaff.bonus();
    }
}