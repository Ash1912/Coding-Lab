#include<iostream>
using namespace std;
void swap(int &x, int &y) {
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int main()
{
	int x=20;
	int y=40;
	cout<<"Before swap x and y values are "<<endl;
	cout<<x<<endl;
	cout<<y<<endl;
	swap(x,y);
	cout<<"After swap x and y values are "<<endl;
	cout<<x<<endl;
	cout<<y<<endl;
}
