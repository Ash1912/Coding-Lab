//Write a program in c++ to covert upper case letters to lower case letters in a
//file.Also count number of vowels
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm>
#include <queue>
using namespace std;

void display()
{
std::string line;
ifstream myfile;
myfile.open("Ashish.txt");
while(std::getline(myfile,line))
{
cout<<line<<endl;
}
myfile.close();
}
void cal();

void upper();

int main()
{
string a;
int p=1;
ofstream myfile;
myfile.open("Ashish.txt");
while(p!=0)
{
cin>>a;
myfile<<a<<endl;
cout<<"You want write more, 1 for yes 0 for no: ";
cin>>p;
}
myfile.close();
upper();
cal();
display();
}


void cal()
{
fstream tf;
tf.open("Ashish.txt");
char arr[100],ch;
int i=0,sum=0,n=0;
while(tf)
{
tf.get(ch);
arr[i]=ch;
i++;
if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
{
i--;
sum=sum+i;
i=0;
n++;
}
}
cout<<"Total no of vowels: "<<n<<endl;

}

void upper()
{
queue<string> line1;
string line;
ifstream myfile;
myfile.open("Ashish.txt");
while(std::getline(myfile,line))
{
transform(line.begin(),line.end(),line.begin(), ::tolower);
line1.push(line);
}
myfile.close();
ofstream myfile1;
myfile1.open("Ashish.txt");
while(!line1.empty())
{
myfile1<<line1.front()<<endl;
line1.pop();
}
myfile1.close();

}
