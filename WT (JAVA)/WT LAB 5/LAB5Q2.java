//Accept 10 numbers from command line and check how many of them are even and how many odd.
import java.util.*;
public class LAB5Q2 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int even = 0;
        int odd = 0;
        for(int i = 0; i < 10 ; i++) {
            int num = sc.nextInt();
            if(num % 2 == 0) {
            even =  even + 1;
            }
            else {
                odd = odd + 1;
            }
        }
    System.out.println("The total even number is " +even+ " \n The total odd number is " +odd);
}
}
