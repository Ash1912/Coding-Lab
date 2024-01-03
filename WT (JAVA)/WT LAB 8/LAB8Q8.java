import java.util.Scanner;
class StackOverflowException extends Exception{
private static final long serialVersionUID = 1L;
StackOverflowException(String s) {
super(s);
} }
class StackUnderflowException extends Exception{
private static final long serialVersionUID = 1L;
StackUnderflowException(String s) {
super(s);
} }
class Stack{
int stackSize,top=-1;
int[] arr;
Stack(int stackSize){
this.stackSize=stackSize;
arr = new int[stackSize];
}
public void push(int element) throws StackOverflowException {
if(top>=stackSize-1)
throw new StackOverflowException("STACK OVERFLOW");
else
arr[++top] = element;
}
public int pop() throws StackUnderflowException{
if(top==-1)
throw new StackUnderflowException("STACK UNDERFLOW\n");
else
return arr[top--];
}
public void peek() throws StackUnderflowException{
if(top==-1)
throw new StackUnderflowException("STACK UNDERFLOW\n");
else
System.out.println(arr[top]+" TOP OF THE STACK\n");
} }
public class LAB8Q8 {
public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
System.out.print("ENTER THE SIZE OF THE STACK ");
int size = sc.nextInt();
Stack S = new Stack(size);
boolean flag=true;
System.out.println("1 TO PUSH IN THE STACK");
System.out.println("2 TO DELETE(POP) FROM THE STACK");
System.out.println("3 TO PEEK THE ELEEMNT THE ELEMENT FROM STACK");
System.out.println("4 TO EXIT");
while(flag){
System.out.print("\nYOUR CHOICE: ");
int choice = sc.nextInt();
switch (choice) {
case 1:
System.out.print("ENTER THE NUMBER TO PUSH IN STACK ");
int num = sc.nextInt();
try{
S.push(num);
}
catch(StackOverflowException e){
System.out.println("EXCEPTION "+e);
}
break;
case 2:
try{
System.out.println(S.pop()+" ELEMENT IS POPPED ");
}
catch(StackUnderflowException e){
System.out.println("EXCEPTION IS OCCURED: "+e);
}
break;
case 3:
try{
S.peek();
}
catch(StackUnderflowException e){
System.out.println("EXCEPTION IS FOUND: "+e);
}
break;
case 4:
System.out.println("THANK YOU\n");
flag=false;
break;
default:
System.out.println("WRONG INPUT FOUND");
} }
sc.close();
} }