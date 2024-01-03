//Find the largest among 3 user entered nos. at the command prompt using Java.
import java.util.*;
public class LAB5Q1 {
    public static void main(String args[]) {
      System.out.println("The command line arguments are :");
      String a = args[0];
      String b = args[1];
      String c = args[2];
      int first_no = Integer.parseInt(a);
      int second_no = Integer.parseInt(b);
      int third_no = Integer.parseInt(c);
      if(first_no > second_no && first_no > third_no) {
          System.out.println("Greatest is first no.= "+first_no);
      }
      else if(second_no > first_no && second_no > third_no) {
          System.out.println("Greatest is second no.= "+second_no);
      }
      else {
        System.out.println("Greatest is third no.= "+third_no);
      }
    }
}