import java.io.*;
public class Q3 {
    public static void main(String args[]) {
        try {
            FileInputStream fin = new FileInputStream("K:\\I Folder\\Java\\WTLAB9\\LowerCase.txt");
            FileOutputStream fout = new FileOutputStream("K:\\I Folder\\Java\\WTLAB9\\UpperCase.txt");
            int i = 0, flag = 1;
            char ch;
            while ((i = fin.read()) != -1) {
                ch = (char) i;
                if (flag == 1) {
                    ch -= 32;
                    flag = 0;
                }
                if (ch == ' ')
                    flag++;
                fout.write(ch);
            }
            System.out.println();
        } catch (Exception e) {
            System.out.println(e);
        } finally {
            System.out.println("Code Executed");
        }
    }
}