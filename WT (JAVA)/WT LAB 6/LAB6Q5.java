//WAP in java which will implement the concept of final keyword.
import java.util.*;
public class LAB6Q5{ 
    
    final int score=1000; 
    
    void run(){  
     score=400; 
     System.out.println(score); 
    } 
    
    public static void main(String args[])
    {  
    LAB6Q5 obj=new  LAB6Q5();  
    obj.run();  
    }  
   }
