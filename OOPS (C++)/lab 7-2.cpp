#include <iostream>
using namespace std;
class Student{
    protected:
        char name[20];
        int roll_number, age;
    public:
        Student(){}
        void getDetails()
        {
            cout<<"Input roll number: ";
            cin>>roll_number;
            cout<<"Input name: ";
            cin.get();
            cin.getline(name, 20);
            cout<<"Input age: ";
            cin>>age;
        }
        void putDetails()
        {
            cout<<"Roll Number: "<<roll_number<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
};
class Test: public Student
{
    protected:
        int s1, s2, s3, s4, s5;
    public:
        Test(): Student(){}
        void getmarks(){
            cout<<"Input marks: \n";
            cout<<"Subject 1: ";
            cin>>s1;
            cout<<"Subject 2: ";
            cin>>s2;
            cout<<"Subject 3: ";
            cin>>s3;
            cout<<"Subject 4: ";
            cin>>s4;
            cout<<"Subject 5: ";
            cin>>s5;
        }
        void putmarks()
        {
            cout<<"Subject 1: "<<s1<<endl;
            cout<<"Subject 2: "<<s2<<endl;
            cout<<"Subject 3: "<<s3<<endl;
            cout<<"Subject 4: "<<s4<<endl;
            cout<<"Subject 5: "<<s5<<endl;
        }
        void display()
        {
            cout<<endl;
            Test::getDetails();
            Test::putDetails();
            Test::getmarks();
            cout<<"Test Marks: \n"; 
            Test::putmarks();
        }
};

int main(){
    Test t1;
    t1.display();
    return 0;
}
