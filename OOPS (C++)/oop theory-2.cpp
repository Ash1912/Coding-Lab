#include <iostream>
using namespace std;
class Student{

    protected:
	char name[50];
	int roll;
	char branch[50];
	char university[50];
	public:
	Student(){}
	 void getdata(){
	 	cout<<"Enter name: ";
	 	cin>>name;
		cout<<"Enter roll no: ";
		cin>>roll;
		cout<<"Enter branch: ";
	 	cin>>branch;
	 	cout<<"Enter university name: ";
	 	cin>>university;
	}
	void display(){
		cout<<"Name is: "<<name<<endl;
		cout<<"Roll no is: "<<roll<<endl;
		cout<<"Branch is: "<<branch<<endl;
		cout<<"University name is: "<<university<<endl;
	}
};
class Marks:virtual public Student
{
	protected:
    int math, phy, chem;
    public:
	Marks(){}


	void getmarks(){
		cout<<"Enter Maths marks: ";
		cin>>math;
		cout<<"Enter Physics marks: ";
		cin>>phy;
		cout<<"Enter Chemistry marks: ";
		cin>>chem;
	}
	void putmarks(){
		cout<<"Maths marks: "<<math<<endl;
		cout<<"Physics marks: "<<phy<<endl;
		cout<<"Chemistry marks: "<<chem<<endl;
	}
};
class Sports:virtual public Student
{
	protected:
	int score;
    public:
	Sports(){}
	void getscore(){
		score=-1;
		while(score<0 || score>100){
			cout<<"Enter score: ";
			cin>>score;
		}
	}
	void putscore(){
		cout<<"Score: "<<score<<"\n";
	}
};


class Result :public Marks, public Sports
{
	private:
	int total;
	int avg;
    public:
	Result(){}
	void findTotal(){
		int total=score+math+phy+chem;
		cout<<"The total (marks + score): "<<total<<endl;
	}
	void findAvg(){
		int avg=(math+phy+chem)/3;
		cout<<"Average is: "<<avg<<endl;
	}
};


int main(){
	Result result;
	cout<<"\n----------Enter student 1 details----------"<<endl;
	result.getdata();
	result.getmarks();
	result.getscore();
	result.display();
	result.putmarks();
	result.putscore();
	result.findTotal();
	result.findAvg();
	Result result1;
	cout<<"\n----------Enter student 2 details----------"<<endl;
	result1.getdata();
	result1.getmarks();
	result1.getscore();
	result1.display();
	result1.putmarks();
	result1.putscore();
	result1.findTotal();
	result1.findAvg();
	system("pause");
	return 0;
}
