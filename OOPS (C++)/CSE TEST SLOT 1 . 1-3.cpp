#include<iostream>
using namespace std;
class Account;
class Bank
{
	private:
	char Bankname[100];
	char Branch[100];
	long IFSCcode;
	public:
		void getInformation()
		{
			cout<<"Enter the bank name :";
			cin>>Bankname;
			cout<<"Enter branch name :";
			cin>>Branch;
			cout<<"Enter IFSC code :";
			cin>>IFSCcode;
		}
		friend void display(Bank b1);
};
class Account
{
	private:
	long Accountnumber;
	char Accountholdername[100];
	long balance;
	public:
		void getInformation()
		{
			cout<<"Enter Account number :";
			cin>>Accountnumber;
			cout<<"Enter Account holder name :";
			cin>>Accountholdername;
			cout<<"Enter balance :";
			cin>>balance;
		}
		friend void display(Account a1);		
};
void display(Bank b1) {
	cout<<"Bank name is \t"<<b1.Bankname<<endl;
	cout<<"Branch name is \t"<<b1.Branch<<endl;
	cout<<"IFSC code is \t"<<b1.IFSCcode<<endl;
} 
void display(Account a1) {
	cout<<"Account number is \t"<<a1.Accountnumber<<endl;
	cout<<"Account holder name is \t"<<a1.Accountholdername<<endl;
	cout<<"Balance is \t"<<a1.balance<<endl;
}
int main()
{
	Bank b2;
	b2.getInformation();
	Account a2;
	a2.getInformation();
	display(b2);
	display(a2);
	return 0;
	}
