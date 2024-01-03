#include<iostream>
using namespace std;
class student {
	char name[30];
	int rollnumber;
	int marks[5];
	int totalmarks;
	public:
		void input(){
			cout<<"Enter student name"<<endl;
			cin>>name;
			cout<<"Enter student roll number"<<endl;
			cin>>rollnumber;
			cout<<"Enter student total marks"<<endl;
			cin>>totalmarks;
			for(int i=0;i<5;++i)
			{
			cout<<"Subject(out of 100)"<<i+1<<":";
			cin>>marks[i];	
			}
		}
		void display()
		{
			cout<<"Name of student is:"<<name<<endl;
			cout<<"Roll number is:"<<rollnumber<<endl;
			cout<<"Total Marks is:"<<totalmarks<<endl;
			int sum=0;
			for(int i=0;i<5;++i)
			{
				sum+=marks[i];
			}
			cout<<"Total marks out of 500 is :"<<sum<<endl;
			cout<<"Percentage is :"<<(sum*100)/(totalmarks)<<endl;
		}
	};
	
	int main()
	{
		student s1;
		s1.input();
		s1.display();
		return 0;
	}
		
