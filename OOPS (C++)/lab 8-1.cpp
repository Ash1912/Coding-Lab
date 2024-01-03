#include <iostream>
using namespace std;

class Account{
	private:
        char customer_name[50];
		 int account_number;
		 public:
        double balance=0.0;
    public:
    	Account() {
    		cout<<"Enter Customer name : ";
    		cin>>customer_name;
    		cout<<"Enter Account number : ";
    		cin>>account_number;
    		}
    		void displayinfo() {
    			cout<<"\nName : "<<customer_name<<"\nAccount number : "<<account_number<<endl;
			}
};


class Savings: public Account {
    private:
        double min_balance=500;
    
    public:
	    void deposit() {
            int amount;
            cout<<"\nEnter amount to deposit: ";
            cin>>amount;
            balance=balance+amount;
        }    
        void withdraw(){
            int amount;
            cout<<"\nEnter amount to withdraw: ";
            cin>>amount;
            if (amount<min_balance)
                cout<<"The minimum amount that can be withdrawn is "<<min_balance;
                
            else
                balance=balance-amount;
        }
        void display(){
            cout<<"\nBalance= "<<balance;
        }
    
};


class Current: public Account{
    private:
        double over_due_amount=500000;
        
    public:
	    void deposit() {
            int amount;
            cout<<"\nEnter amount to deposit: ";
            cin>>amount;
            balance=balance+amount;
        }    
        void withdraw(){
            int amount;
            cout<<"\nEnter amount to withdraw: ";
            cin>>amount;
            if (amount>over_due_amount)
                cout<<"\nThe maximum amount that can be withdrawn is "<<over_due_amount;
                
            else
                balance=balance-amount;
        }
        void display(){
            cout<<"\nBalance= "<<balance;
        }
        
};


int main()
{
    cout<<"\n---Savings Account Details---\n"<<endl;
        Savings s;
        s.displayinfo();
        s.deposit();
        s.withdraw();
        s.display();
    cout<<"\n---Current Account Details---\n"<<endl;
        Current c;
        c.displayinfo();
        c.deposit();
        c.withdraw(); 
        c.display();
    
    return 0;
}

