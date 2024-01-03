//Program to print the corresponding grade for the given mark using if...else statement in java.
import java.util.Scanner;
public class grade {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter marks :");
        double marks = scan.nextDouble();
        if(marks >= 90) {
            System.out.println("Outstanding: Grade O");
        }
        else if(marks < 90 && marks >= 80) {
            System.out.println("Excellent: Grade E");
        }
        else if(marks < 80 && marks >= 70) {
            System.out.println("Very Good: Grade A");
        }
        else if(marks < 70 && marks >= 60) {
            System.out.println("Good: Grade B");
        }
        else if(marks < 60 && marks >= 50) {
            System.out.println("Satisfactory: Grade C");
        }
        else if(marks < 50 && marks >= 40) {
            System.out.println("Work Hard: Grade D");
        }
        else {
            System.out.println("Failed");
        }
    }
    
}
