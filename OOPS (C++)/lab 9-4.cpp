#include <iostream>
using namespace std;
class count
{
    private:
        int *candidate1;
        int *candidate2;
        int *candidate3;
        int *spolit_ballot;
    public:
        count()
        {
            candidate1 = new int(0);
            candidate2 = new int(0);
            candidate3 = new int(0);
            spolit_ballot = new int(0);
        }
        void inp()
        {
            int temp;
            cout<<"Enter Ballot: ";
            cin>>temp;
            if(temp == 1)
                *candidate1 += 1;
            else if(temp == 2)
                *candidate2 += 2;
            else if(temp == 3)
                *candidate3 += 3;
            else
                *spolit_ballot+=4;
        }
        void disp()
        {
            cout<<"No of Votes of Candidate 1 : "<<*candidate1<<endl;
            cout<<"No of Votes of Candidate 2 : "<<*candidate2<<endl;
            cout<<"No of Votes of Candidate 3 : "<<*candidate3<<endl;
            cout<<"No of Spoilt Ballot : "<<*spolit_ballot<<endl;
        }
        ~count()
        {
            delete candidate1;
            delete candidate2;
            delete candidate3;
            delete spolit_ballot;
            cout << "Variables Distructed"<<endl;
        }
};
int main()
{
    count x;
    int n;
    cout<<"Enter Number of Voters : ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        x.inp();
    }
    x.disp();
    x.~count();
    return 0;
}

