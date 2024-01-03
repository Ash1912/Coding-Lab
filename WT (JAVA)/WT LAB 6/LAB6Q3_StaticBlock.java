//WAP in java which will display the working of static methods and static block with the help of each separate example. 
import java.util.*;
public class LAB6Q3_StaticBlock {
 static int a;
 static int b;
 static {
    a = 40;
    b = 50;
 }
 public static void main(String args[]) {
  System.out.println("Value of a = " + a);
  System.out.println("Value of b = " + b);
 	}
}