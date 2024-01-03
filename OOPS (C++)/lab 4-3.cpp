#include <iostream>
#include <string.h>
using namespace std;
class account
{
public:
    char name[50];
    char branch[50];
    int number;
    float totalamount;

public:
    void getaccountinfo()
    {
        cout << "Enter the name of account\n";
        cin >> name;
        cout << "Enter the name of branch\n";
        cin >> branch;
        cout << "Enter the account number\n";
        cin >> number;
        cout << " enter total amount " << endl;
        cin >> totalamount;
    }
    void displayaccountinfo()
    {
        cout << "The name of account  " << name << endl;
        cout << "The name of branch  " << branch << endl;
        cout << "The account number  " << number << endl;
        cout << " total amount is " << totalamount << endl;
    }
    void withdraw(float a)
    {
        totalamount = totalamount - a;
    }
    void deposit(float a)
    {
        totalamount = totalamount + a;
    }
    void copydetail(char a[50], char b[50], int no, float t)
    {
        strcpy(name, a);
        strcpy(branch, b);
        number = no;
        totalamount = t;
    }
};
int main()
{
    account a, a1;

    a.getaccountinfo();
    float d, w;
    cout << "Enter value to deposit" << endl;
    cin >> d;
    cout << "Enter value to withdraw" << endl;
    cin >> w;
    a.withdraw(w);
    a.deposit(d);
    a.displayaccountinfo();
    a1.copydetail(a.name, a.branch, a.number, a.totalamount);
    a1.displayaccountinfo();
}
