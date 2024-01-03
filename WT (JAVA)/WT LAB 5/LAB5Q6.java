//Find sum of each diagonal (left & right) elements separately of a user entered 3*3 matrices in Java.
import java.util.Scanner;
    public class LAB5Q6 {
    public static void main(String args[]) {
        
    Scanner sc = new Scanner(System.in);
     System.out.println("Enter 3d array size :");
       int n=sc.nextInt();
       int m=sc.nextInt();
       int a[][]=new int[n][m];
       int r=0,l=0;
       System.out.println("Enter elements in array :");
       for(int j=0;j<3;j++){
        for(int i=0;i<3;i++)
       {
         a[j][i] = sc.nextInt();
       }
       }

       for(int i=0;i<3;i++)
       {
         l=l+a[i][i];
       }
       for(int i=0;i<3;i++)
       {
         r=r+a[i][2-i];
       }
       System.out.println("Sum of Left diagonal="+l);
       System.out.println("Sum of Right diagonal="+r);
    }
}