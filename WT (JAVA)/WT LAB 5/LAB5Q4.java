//Program to find no. of objects created out of a class using "static" modifier.
public class LAB5Q4 {
    static int s = 0;
    public LAB5Q4() {
        s++;
    }
    public static void main(String args[]) {
        LAB5Q4 A = new LAB5Q4();
        LAB5Q4 B = new LAB5Q4();
        LAB5Q4 C = new LAB5Q4();
        LAB5Q4 D = new LAB5Q4();
        LAB5Q4 E = new LAB5Q4();
        System.out.print("No. of objects is : "+s);
    }
}
