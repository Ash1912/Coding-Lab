public class LAB8Q3 
{
    public static void main(String [] args)
    {
        int a[] = new int[2];
        try
        {
            System.out.println("\n Access Element Three: " +a[3]);
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("\n Exception thrown : " +e);
        }
        finally
        {
            a[0]=9;
            System.out.println(" First Element value: " +a[0]);
            System.out.println(" The Final Statement is Executed\n");
        }
    }
}

