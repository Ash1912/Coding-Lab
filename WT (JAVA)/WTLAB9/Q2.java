import java.io.*;  
public class Q2
{
   public static void main(String[] args) throws IOException
   {
       FileInputStream sourceStream1 = null;
       FileInputStream sourceStream2 = null;
       int flag = 1;
       try
       {
           sourceStream1 = new FileInputStream("input.txt");
           sourceStream2 = new FileInputStream ("output.txt");
           int count = 0;
           int c1 = sourceStream1.read();
           int c2 = sourceStream2.read();
           while ( c1 != -1 || c2 != -1)
           {  
               if (c1 != c2)
               {
                   System.out.println("Files are not equal at position " + count);
                   flag = 0;
                   break;
               }
               c1 = sourceStream1.read();
               c2 = sourceStream2.read();
               count++;
           }         
       }
       finally
       {
           if (sourceStream1 != null)
               sourceStream1.close();           
           if (sourceStream2 != null)           
               sourceStream2.close();           
       }
       if (flag == 1)
           System.out.println("Files are equal");
   }
}
