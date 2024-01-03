package q5;
 //@author Java_Programs
public class q5 {
    public static void main(String[] args) {
        Cats c = new Cats();
        c.cats();
        Dogs d = new Dogs();
        d.dogs();
    }  
}
abstract class Animals{
    abstract void cats();
    abstract void dogs();
}
class Cats extends Animals{
    @Override
    public void cats(){
        System.out.println("Cat's Meow: ");
    }
    @Override
    public void dogs(){}
}
class Dogs extends Animals{
    @Override
    public void cats(){      
    }
    @Override
    public void dogs(){
    System.out.println("Dogs bark: ");
    }
} 
