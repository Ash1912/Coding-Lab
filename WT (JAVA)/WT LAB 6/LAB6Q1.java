//Write a program in java which will display the working of static variable with example.
import java.util.*;
class Student {  
    int rollno; 
    String name;  
    static String college ="KIIT";  
    Student(int r, String n){  
    rollno = r;  
    name = n;  
    }    
    void display (){System.out.println(rollno+" "+name+" "+college);}  
 }   
 public class LAB6Q1{  
  public static void main(String args[]){  
  Student s1 = new Student(1912,"Ashish");  
  Student s2 = new Student(1909,"Urvashi");   
  s1.display();  
  s2.display();  
  }  
 }