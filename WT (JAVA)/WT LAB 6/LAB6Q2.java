//Write a program in java which will display the working of static variable with a comparison of non static with the help of a counter program.
import java.util.*;
class A
{
    static int count; 
    int count2; 
    A()
    {
        count++;
        count2++;
    }
    void number() 
    {
        System.out.println("The number of objects created is(using static variable): "+count); 
        System.out.println("Value of count is(using non-static variable): "+count2);
 

    }
}
public class LAB6Q2 {
    public static void main(String arg[])
    {
        A obj1 = new A();
        A obj2 = new A();
        A obj3 = new A();
        A obj4 = new A();
        obj1.number();
    }
}