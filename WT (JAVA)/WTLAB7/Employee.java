package General;
public class Employee 
{ protected int empid;
    private String ename;
    private double basic, DA, HRA; 
    public Employee(String n, int id, double b) 
    { 
        ename = n; basic = b; empid = id; DA = b * 0.8; HRA = b * 0.5; 
    }public double earnings() 
    { 
        return basic + DA + HRA;
    }
    public void printName() 
    { 
        System.out.println("Name: " + ename); 
    } 
}