//Write a program to demonstrate exception specification concept with class name as 
//Time which validate hours, minutes and seconds.[i.e, 0<=hours<=24,0<=seconds<=60,0<=minutes<=60]
#include<iostream>
using namespace std;
class time
{
   private:
	int hours;
	int minutes;
   public:
   void fun1(int minutes) throw(int)
   {
       if(minutes<=60){
           throw hours;
       }
       
   }
	void settime(int h, int m)
	{
		hours=h; minutes=m;
	}
	time sum(time);
	void showtime();
};
time time::sum(time TM)
{
	time t;
	t.minutes = minutes + TM.minutes;
	t.hours=t.minutes/60;
	t.minutes=t.minutes%60;
	t.hours += hours + TM.hours;
	return t;
}
void time::showtime()
{
	cout<<hours<<" hours and "<<minutes<<" minutes"<<endl;
}
int main()
{
	time T1,T2,T3;
	T1.settime(5,45);
	T2.settime(6,30);
	T3=T1.sum(T2);
	cout<<"\n Time 1 : ";
	T1.showtime();
	cout<<"\n Time 2 : ";
	T2.showtime();
	cout<<"\n Time 3 : ";
	T3.showtime();
    try{
        T1.fun1(3);
    }
    catch(int i){
        cout<<"\nException caught.........can't validate less than 60";
    }
	return 0;
}
