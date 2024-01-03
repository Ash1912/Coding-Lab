//WAP to demonstrate template specialization in which a special template function swap, used to swap two characters and
// to swap all other data types with function template separately.

#include<iostream>
using namespace std;
template<class T>

void fun(T x, T y)
{
}
void swap(int &x, int &y)
	{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
template<>
void fun<int> (int x, int y)
{
	cout<<"Value of x & y before swap is : "<<x<<"\t"<<y<<endl;
	swap(x, y);
	cout<<"Value of x & y after swap is : "<<x<<"\t"<<y<<endl;
}

template<>
void fun<double> (double x, double y)
{
	cout<<"Value of x & y before swap is : "<<x<<"\t"<<y<<endl;
	swap(x,y);
	cout<<"Value of x & y after swap is : "<<x<<"\t"<<y<<endl;
}

int main()
{
	fun <int> (10,15);
	fun <double> (11.00,12.77);
}
