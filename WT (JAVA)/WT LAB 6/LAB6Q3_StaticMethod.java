//WAP in java which will display the working of static methods and static block with the help of each separate example. 
import java.util.*;
public class LAB6Q3_StaticMethod {
        public static void main(String args[]){
          Student s1 = new Student();
          s1.showData();
          Student s2 = new Student();
          s2.showData();
       }
     }
     
     class Student {
     int a; 
     static int b; 
     
       Student(){
        b++;
       }
     
        public void showData(){
           System.out.println("Value of a = "+a);
           System.out.println("Value of b = "+b);
        }
     }
