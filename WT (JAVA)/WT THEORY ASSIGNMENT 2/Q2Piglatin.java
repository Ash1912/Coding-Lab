// Create a piglatin converter. If the word begins with a vowel then just add yay 
// to the end of the word. If it begins with a consonant or grp of consonants then 
// remove the consonant or grp of consonants to the end of the word and then add yay
import java.util.Scanner;
class Q2Piglatin
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter a word");
        String s = in.nextLine();
        s = s.toUpperCase();
        int i;
        for(i=0; i<s.length(); i++)
        {
            char ch = s.charAt(i);
            if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            break; 
        }
        String f =s.substring(i)+s.substring(0,i) +"YAY";
        System.out.println(f);
    }
}