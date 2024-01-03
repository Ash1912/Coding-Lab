// Define two different classes namely, Student and Employee. 
// These classes are derived from a base class Person. 
// Define other two classes Staff and Faculty. Staff and Faculty classes are derived from Employee class.
// The Person class has name and age data and display method to display the name and age of a person. 
// The Student class has data like rollNo and branch and display method to display 
// name, age, rollNo and branch of the student. Stuff has ecNo and doj(date of joining) 
// data and display method to display name, age, ecNo, doj of the stuff. Faculty has 
// designation data (Assistant Professor, Associate Professor and Professor) and 
// display method to display the name, age, ecNo, doj and designation of the Faculty. 
// Staff has designation data (Technical and Clerical) and display method to display the 
// name, age, ecNo, doj and designation of the Staff. Each class have their own 
// constructor to initialize the value of each data field. Finally create MainDemoClass 
// and create an object of each class. Print the values of all objects in the 
// MainDemoClass
class Person
{
String name;
int age;
Person(String n,int a) {
name=n;
age=a;
}
public void display()
{
System.out.println("Name:"+name);
System.out.println("Age:"+age);
} 
}
class Student extends Person
{
int roll;
String branch;
Student(String n,int a,String b,int r) {
super(n,a);
roll=r;
branch =b;
}
public void display()
{
super.display();
System.out.println("Roll:"+roll);
System.out.println("Branch:"+branch);
} 
}
class Employee extends Person
{
int ecNo;
String doj;
Employee(String n,int a,String d,int empno) {
super(n,a);
ecNo=empno;
doj=d;
}
public void display()
{
super.display();
System.out.println("Employee Number:"+ecNo);
System.out.println("Date of Joining:"+doj);
} 
}
class Staff extends Employee
{
String desg;
Staff(String n,int a,String d,int empno,String dsn) {
super(n,a,d,empno);
desg=dsn;
}
public void display()
{
super.display();
System.out.println("Designation:"+desg);
} 
}
class Faculty extends Employee
{
String desg;
Faculty(String n,int a,String d,int empno,String dsn)
{
super(n,a,d,empno);
desg=dsn;
}
public void display()
{
super.display();
System.out.println("Designation:"+desg);
} 
}
public class Q1MainDemoClass {
public static void main(String[] args) {
System.out.println("Person Class");
Person p = new Person("Adesh",20);
p.display();
System.out.println();
System.out.println("Student Class");
Student s =new Student("Ashish Mishra",22,"CSE",20051685);
s.display();
System.out.println();
System.out.println("Employee Class");
Employee e= new Employee("Samik",21,"28-12-2001",20051691);
e.display();
System.out.println();
System.out.println("Staff Class");
Staff st = new Staff("Adesh",20,"27-10-2003",20051707,"Technical");
st.display();
System.out.println();
System.out.println("Faculty Class");
Faculty f = new Faculty("Swastika",20,"05-03-2002",20051784,"Professor");
f.display();
} 
}