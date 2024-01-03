//WAP in java for the implementation of constructor and constructor overloading. 
import java.util.*;
public class LAB6Q4 {   
    int roll;  
    String name;  
      
    LAB6Q4()
    {  
        roll=0;
        name=" ";
    System.out.println("Default constructor");  
    }  
      
    LAB6Q4(int i, String n)
    {  
    roll = i;  
    name = n;  
    }  
      
    public static void main(String[] args) {    
    LAB6Q4 s = new LAB6Q4();  
    System.out.println("\nDefault Constructor values: \n");  
    System.out.println("Student Roll : "+s.roll + "\nStudent Name : "+s.name);  
      
    System.out.println("\nParameterized Constructor values: \n");  
    LAB6Q4 LAB6Q41 = new LAB6Q4(1912, "Ashish");  
    System.out.println("Student Roll : "+LAB6Q41.roll + "\nStudent Name : "+LAB6Q41.name);  
    }  
    }