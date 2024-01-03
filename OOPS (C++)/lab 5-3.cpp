#include<iostream>
using namespace std;

class Stud
{
    public:
    int roll;
    char name[30];
    float totalmarks;
    static float avg;

    void getData()
    {
        cout << " Enter the roll number : ";
        cin >> roll;
        cout << " Enter the name : ";
        cin >> name;
        cout << " Enter the total marks : ";
        cin >> totalmarks;
    }

    friend void calc(Stud *a, int n)
    {
        float t=0.0;
        for(int i=0;i<n;i++)
        {
            t=t+a[i].totalmarks;
        }
        Stud::avg=t/n;
        cout << "The average of the class is : " << Stud::avg;
    }
};

float Stud::avg;

int main()
{
    Stud s[10];
    int n;
    cout << "Enter the number of students : " << endl;
    cin >> n;
    for(int i=0;i<n;i++)
        s[i].getData();
    calc(s,n);
    return 0;
}
