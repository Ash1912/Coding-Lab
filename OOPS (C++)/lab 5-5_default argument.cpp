#include <iostream>
using namespace std;
void print(char ch = '*', int n = 80)
{
    for (int i = 1; i <= n; ++i)
    {
        cout << "*";
    }
}
int main()
{
    char ch = '\0';
    int n;
    cout << "Enter the character (press Enter to skip): ";
    scanf("%[^\n]c", &ch);
    if (ch != '\0')
    {
        cout << "Enter the number of times (enter a negative number to skip): ";
        cin >> n;
        if (n >= 0)
        {
            cout << "Output: ";
            print(ch, n);
        }
        else
        {
        	cout<<"Output: ";
            print(ch);
        }
    }
    else
    {
        cout << "Output: ";
        print();
    }
}
