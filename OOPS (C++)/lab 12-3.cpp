#include<bits/stdc++.h>
using namespace std;
class bank
{
	public:
		int minbal,bal,wd,dp,s_bal,c_bal;
		char name[20];
		long int ac;
		void input(const char *n,int b,long int a)
		{
			strcpy(name,n);
			bal=b;
			ac=a;
		}
		void saving(int w,int d)
		{
			minbal=1000;
			wd=w;
			dp=d;
			s_bal=bal+dp-wd;
		}
		void current(int w,int d)
		{
			wd=w;
			dp=d;
			c_bal=bal+dp-wd;
		}
		virtual void display(){
		}
};
class save:public bank
{
	public:
		void display()
		{
			cout<<"\nAccount number :"<<ac;
			cout<<"\nCustomer name :"<<name;
			cout<<"\nMinimum balance :"<<minbal;
			if(s_bal<minbal)
			{
				cout<<"\nYou cannot withdraw balance!!\nYour balance is :"<<s_bal;
			}
			else
			cout<<"\nYou can withdraw balance.\nYour balance is :"<<s_bal;
		}
};
class curr:public bank
{
	public:
		void display()
		{
			cout<<"\nAccount number :"<<ac;
			cout<<"\nCustomer name :"<<name;
			if(c_bal<0)
			{
				cout<<"\nOverdued Amount";
			}
			else
			cout<<"\nYour current balance: "<<c_bal;
		}
};
int main()
{
	save s;
	curr c;
	bank *b[2];
	b[0]=&s;
	b[1]=&c;
	cout<<"\nFor saving account :";
	b[0]->input("Ashish",3000,751812);
	b[0]->saving(1000, 500);
	b[0]->display();
	cout<<"\nFor current account :";
	b[1]->input("Ash",4000,890533);
	b[1]->current(2000,1000);
	b[1]->display();
	return 0;
}
