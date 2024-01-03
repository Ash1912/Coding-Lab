// WAP in java which will implement the logic of inner class
import java.util.*;
class Outer {

    class Inner {
 
        public void show()
        {
            System.out.println("Ashish Kumar Mishra");
        }
    }
}
class LAB6Q7 {
    public static void main(String[] args)
    {
        Outer.Inner in = new Outer().new Inner();
        in.show();
    }
}