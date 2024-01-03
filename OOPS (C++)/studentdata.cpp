#include<iostream>
using namespace std;
class student {
	char name[30];
	int rollnumber;
	int totalmarks;
	public:
		void input(){
			cout<<"Enter student name"<<endl;
			cin>>name;
			cout<<"Enter student roll number"<<endl;
			cin>>rollnumber;
			cout<<"Enter student total marks"<<endl;
			cin>>totalmarks;
		}
		void Display(){
			cout<<"Student name is \t"<<name<<endl;
			cout<<"Student roll number is \t"<<rollnumber<<endl;
			cout<<"Student total marks is \t"<<totalmarks<<endl;
		}
};
int main()
{
	student s1;
	s1.input();
	s1.Display();
	return 0;
}
