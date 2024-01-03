//Find the no. of occurrence of each element in an user entered list of nos.
import java.util.*;
public class LAB5Q5 {
    public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter the size of the array : ");
    int size = sc.nextInt();
    int arr1[] = new int[size];
    int arr2[] = new int[size];
    int i, j, count;
    System.out.println("Enter the elements of the array : ");
    for(i = 0; i < size; i++) {
        arr1[i] = sc.nextInt();
        arr2[i] = -1;
    }
    for(i = 0; i < size; i++)
    {
        count = 1;
        for(j = i+1; j < size; j++)
        {
            if(arr1[i] == arr1[j])
            {
                count++;
                arr2[j] = 0;
            }
        }
        if(arr2[i] != 0)
        {
            arr2[i] = count;
        }
    }
    System.out.println("Frequency of the elements :");
    for(i = 0; i < size; i++)
    {
        if(arr2[i] != 0)
        {
            System.out.println("The Element "+arr1[i]+" occuring this times\n"+arr2[i]);
        }
    }
}
}
