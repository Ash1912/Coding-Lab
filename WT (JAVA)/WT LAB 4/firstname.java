//Write a program in java to take first name and last from user and print both in one line as last name followed by first name.
import java.util.*;
public class firstname {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the First Name :");
        String fname = scan.nextLine();
        System.out.print("Enter the Last Name :");
        String lname = scan.nextLine();
        System.out.println(fname+" "+lname);
        scan.close();
    }
}
