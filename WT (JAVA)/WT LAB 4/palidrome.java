//Program to check a user entered number is palidrome or not.
import java.util.Scanner;
public class palidrome {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter no. :");
        int n = scan.nextInt();
        int r,sum=0,temp;
        temp=n;
        while(n>0) {
            r=n%10;
            sum=(sum*10)+r;
            n=n/10;
        }
        if(temp==sum)
        System.out.println("Palindrome Number");
        else
        System.out.println("Not a Palindrome Number");
    }
}
