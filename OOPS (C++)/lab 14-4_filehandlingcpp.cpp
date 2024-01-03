//4. WAP in C++ to write your name, roll number, branch and
//university into a file.Now open the same file and display all student
//details. 
#include<iostream>
#include<fstream>
using namespace std;
class student
{
	int roll;
	char name[30];
	char branch[50];
	public :
		student(){}
		void getData();
		void displayData();
};
void student :: getData()
{
	cout<<"\nEnter Roll No. :: ";
	cin>>roll;
	cin.ignore();
	cout<<"\nEnter Name :: ";
	cin.getline(name, 30);
	cout<<"\nEnter Branch :: ";
	cin.getline(branch, 50);
}
void student :: displayData()
{
	cout<<"\nRoll No. :: "<<roll<<endl;
	cout<<"\nName :: "<<name<<endl;
	cout<<"\nBranch :: "<<branch<<endl;
}
int main()
{
	student s[3];
	fstream file;
	int i;
	file.open("C:\\Users\\lenovo\\Documents\\file 4.txt", ios :: out);
	cout<<"\nWriting Student Information to the file :- "<<endl;
	cout<<"\nEnter 3 student details to the file :- "<<endl;
	for(i=0;i<3;i++)
    {
    	s[i].getData();
    	file.write((char *)&s[i], sizeof(s[i]));
	}
	file.close();
	file.open("C:\\Users\\lenovo\\Documents\\file 4.txt", ios :: in);
	cout<<"\nReading Student Information to the file :- "<<endl;
	for(i=0; i<3; i++)
	{
		file.read((char *)&s[i], sizeof(s[i]));
		s[i].displayData();
	}
	file.close();
	return 0;
}
