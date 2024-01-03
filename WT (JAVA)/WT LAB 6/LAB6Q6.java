//WAP in java which will overload the add function with respect to no. of parameter, types of parameter and sequence of parameter 
import java.util.*;
public class LAB6Q6 {

     public static void add(int a, int b){
         System.out.println("Sum of " + a + " and " + b + " is: " + (a + b));
     }
 
     public static void add(float a, float b) {
         System.out.println("Sum of " + a + " and " + b + " is: " + (a + b));
     }
 
     public static void add(int a, float b) {
         System.out.println("Sum of " + a + " and " + b + " is: " + (a + b));
     }
 
     public static void add(int a, float b, int c) {
         System.out.println("Sum of " + a + " and " + b + " and " + c + " is: " + (a + b + c));
     }
 
     public static void main(String[] args) {
         
         add(60, 50);
         add(60.5f, 20.5f);
         add(60, 20.5f);
         add(60, 20.5f, 30);
     }
 }
