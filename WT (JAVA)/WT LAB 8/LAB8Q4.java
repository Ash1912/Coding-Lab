import java.util.Scanner;
public class LAB8Q4 {
    public static void main(String[] args) {
        NegativeNumberException oMethod = new NegativeNumberException();
        System.out.println("enter the number : ");
        Scanner sc=new Scanner(System.in);
        int n = sc.nextInt();
        oMethod.ProcessInput(n);
    }
}
class NegativeNumberException extends Exception {
    void ProcessInput(int a) {
        try {
            if (a < 0) {
                throw new NegativeNumberException();
            } else {
                System.out.println("found a positive number : " + (double) a);
            }
        } catch (NegativeNumberException e) {
            System.out.println("Found a negative number");
        }
    }
}