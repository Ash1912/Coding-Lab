#include<iostream>
using namespace std;

class Time
{
    public:
    int hours;
    Time(int h)
    {
        hours=h;
    }
	int get_hours()
	{
		return hours;
	}
	void display()
	{
		cout<<"Hours: "<<hours<<endl;
	}
};

class Minutes
{
	public:
	int mins;
	Minutes(Time t)
	{
		mins=t.get_hours()*60;
	}
	void display()
	{
		cout<<"Minutes: "<<mins<<endl;
	}
};

int main()
{
	Time t(5);
	t.display();
	Minutes m(t);
	m.display();
	
	return 0;
}
