#include <iostream>
using namespace std;
 
class Time
{
private:
    int hours;
    int minutes;
    int seconds;
 
public:
    void getTime(void);
    void finalTime(void);
    void DisplayTime(void);
    void addTime(Time T1,Time T2);
    void subtractTime(Time T1,Time T2);
};
 
void Time::getTime(void)
{
    cout << "Enter time : " << endl;
    cout << "In Hours : ";    
	cin>>hours;
    cout << "In Minutes : ";  
	cin>>minutes;
    cout << "In Seconds : ";  
	cin>>seconds;
}
 
void Time::finalTime(void)
{
    cout << endl;
    cout << "Time after add: ";
    cout << hours << ":" << minutes << ":" << seconds << endl;
}

void Time::DisplayTime(void)
{
	cout << endl;
    cout << "Time after subtract: ";
    cout << hours << ":" << minutes << ":" << seconds << endl;
}
 
void Time::addTime(Time T1,Time T2)
{
     
    this->seconds=T1.seconds+T2.seconds;
    this->minutes=T1.minutes+T2.minutes + this->seconds/60;;
    this->hours= T1.hours+T2.hours + (this->minutes/60);
    this->minutes %=60;
    this->seconds %=60;
}
 
void Time::subtractTime(Time T1,Time T2)
{
     
    this->seconds=T1.seconds-T2.seconds;
    this->minutes=T1.minutes-T2.minutes + this->seconds/60;;
    this->hours= T1.hours-T2.hours + (this->minutes/60);
    this->minutes %=60;
    this->seconds %=60;
}
 
 
int main()
{
    Time T1,T2,T3;
    T1.getTime();
    T2.getTime();
    T3.addTime(T1,T2);
    T3.finalTime();
    T3.subtractTime(T1,T2);
    T3.DisplayTime();
     
    return 0;
}
