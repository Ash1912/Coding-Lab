//Program to sort the user entered list of numbers of any size.
import java.util.*;
public class LAB5Q3 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int temp;
        System.out.print("Enter the size of the array : ");
        int size = sc.nextInt();
        int arr[] = new int[size];
        System.out.println("Enter the elements of the array : ");
        int i, j;
        for(i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Display the elements before sorting :  \n");
        for(i = 0; i < size; i++) {
            System.out.print(arr[i]+ " , "); 
        }
        for(i = 0; i < size; i++) {
            for(j = 0; j < size-i-1; j++) {
                if(arr[j] > arr[j+1]) {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        System.out.println("\nDisplay the elements after sorting :  \n");
        for(i = 0; i < size; i++) {
            System.out.print(arr[i]+ " , "); 
        }
    }
}
