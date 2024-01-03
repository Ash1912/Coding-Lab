#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    protected:
    	char name[50];
        int roll;
        int age;
};
 
class Test : virtual public Student
{
    protected:
        int marks1,marks2,marks3,marks4,marks5;
        Test(int m1,int m2,int m3,int m4,int m5): marks1(m1),marks2(m2),marks3(m3),marks4(m4),marks5(m5) {}   
        void show()
        {
            cout<<"The marks are :"<<endl;
			cout<<"Enter marks in subject 1: \t"<<marks1<<endl;
			cout<<"Enter marks in subject 2: \t"<<marks2<<endl;
			cout<<"Enter marks in subject 3: \t"<<marks3<<endl;
			cout<<"Enter marks in subject 4: \t"<<marks4<<endl;
			cout<<"Enter marks in subject 5: \t"<<marks5<<endl;
        }
};
 
class Sports : virtual public Student
{
    protected:
        int grade;
        Sports(int g) : grade(g) {}
        void show()
        {
            cout<<"Percentage = "<<grade<<endl;
        }
};
 
class Result : public Test, public Sports
{
    public:
    Result(char n[], int r, int ag,int m1,int m2,int m3,int m4,int m5,int g) : Test(m1,m2,m3,m4,m5),Sports(g) 
    {
    	strcpy(name,n);
        roll = r;  
		age = ag; 
    }
    void show()
    {
    	cout<<"Name : "<<name<<endl;
        cout<<"Roll : "<<roll<<endl;
        cout<<"Age : "<<age<<endl;
        Test::show();
        Sports::show();
        cout<<"Total Marks : "<<marks1+marks2+marks3+marks4+marks5+grade<<endl;
    }
};
 
int main()
{   
    Result *r = new Result("Ashish", 1685, 20, 90,95,96,99,98,97);
    r->show();
    return 0;   
}
