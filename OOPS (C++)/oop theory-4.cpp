#include <iostream>
#include <string>

using namespace std;

struct invalidDay : public exception 
{
const char * what() const throw () 
{
    return "Invalid date, try again.";
}
};

struct invalidMonth : public exception 
{
const char * what() const throw () 
{
    return "Invalid month, try again.";
}
};

int main()
{
int day;
int month;
int year;
string monthName;

try 
{
    cout << "Enter : mm/dd/yyyy : ";
    cin >>month>>day>>year;

    if (day > 31)
        throw invalidDay();

    if (month == 1) {
        monthName = "January";
        if (day > 31)
            throw invalidDay();
    }
    else if (month == 2) {
        monthName = "February";
        if (day > 28)
            throw invalidDay();
    }
    else if (month == 3) {
        monthName = "March";
        if (day > 31)
            throw invalidDay();
    }
    else if (month == 4) {
        monthName = "April";
        if (day > 30)
            throw invalidDay();
    }
    else if (month == 5) {
        monthName = "May";
        if (day > 31)
            throw invalidDay();
    }
    else if (month == 6) {
        monthName = "June";
        if (day > 30)
            throw invalidDay();
    }
    else if (month == 7) {
        monthName = "July";
        if (day > 31)
            throw invalidDay();
    }
    else if (month == 8) {
        monthName = "August";
        if (day > 31)
            throw invalidDay();
    }
    else if (month == 9) {
        monthName = "September";
        if (day > 30)
            throw invalidDay();
    }
    else if (month == 10) {
        monthName = "October";
        if (day > 31)
            throw invalidDay();
    }
    else if (month == 11) {
        monthName = "November";
        if (day > 30)
            throw invalidDay();
    }
    else if (month == 12) {
        monthName = "December";
        if (day > 31)
            throw invalidDay();
    }
    else if (month > 12)
        throw invalidMonth();

    cout << monthName << " " << day << "," << year << "." << endl;


}

catch (invalidDay& e)
{
    cout << e.what() << endl;
}
catch (invalidMonth& e)
{
    cout << e.what() << endl;
}

system("pause");
return 0;



}
