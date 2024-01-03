public class LAB8Q1 
{   
    public static void main(String[] args)
    {  
        try
        {
             int a[] = new int[5];
             a[10]=10;
        }
       catch(ArrayIndexOutOfBoundsException e)
       {
            System.out.println("\nException Caught ArrayIndexOutOfBoundsException\n");
       }
    }  
}