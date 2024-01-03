import java.util.*;
interface motor {
	int capacity = 19;
	int run();
	int consume();
}
class WashingMachine implements motor{
	@Override
	public int consume() {
		System.out.println("The capacity in consume function is "+capacity);
		return 0;
	}
	
	@Override
	public int run() {
		System.out.println("Capacity in run function is "+capacity);
		return 0;
	}
}
public class Q2 {
	public static void main(String[] args) {
		motor w = new WashingMachine();
		w.consume();
		w.run();
	}
}
