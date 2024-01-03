#include<iostream>
using namespace std;

template < class T>
class Swapper{
	private:
		T mem1, mem2;
	public:
		Swapper(T t1, T t2){
			mem1 = t1;
			mem2 = t2;
		}
		void display(){
			cout<<"mem1 = "<<mem1<<" and mem2 = "<<mem2<<endl;
		}
		void swapp(){
			T temp;
			temp = mem1;
			mem1 = mem2;
			mem2 = temp;
		}
};

int main(){
	Swapper <int>int_swapper(2,6);
	Swapper <float>float_swapper(6.7777, 8.5555);
	cout<<"Before swapping integer :"<<endl;
	int_swapper.display();
	cout<<"Before swapping float :"<<endl;
	float_swapper.display();
	int_swapper.swapp();
	float_swapper.swapp();
	cout<<"After swapping integer :"<<endl;
	int_swapper.display();
	cout<<"After swapping float :"<<endl;
	float_swapper.display();
	return 0;
}
