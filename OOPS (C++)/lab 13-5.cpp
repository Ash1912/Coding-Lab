#include<iostream>
using namespace std;
template<class T=int>
class Test {
    T x1;
	public:
		template<class U>
void fun(T x, U y);
};
void swap(int &x, int &y)
	{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
template<class T>
template<class U>

void Test<T>::fun (T x, U y)
{
	x1=x;
	cout<<"Value of x1 & y before swap is : "<<x1<<"\t"<<y<<endl;
	swap(x1, y);
	cout<<"Value of x1 & y after swap is : "<<x1<<"\t"<<y<<endl;
}
int main()
{
	Test <int> t1;
	t1.fun(10,15);
	Test <double> t2;
	t2.fun(11.00,12.77);
	Test <char> t3;
	t3.fun('A','C');
}
