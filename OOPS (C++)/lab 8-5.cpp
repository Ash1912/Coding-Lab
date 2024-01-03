#include<iostream>
using namespace std;
class Coins_Bit {
	int BITCOIN;
	public:
		class Bitcoin_Value {
			int rupees;
			public:
				void calculate() {
					Coins_Bit c1;
					cout<<"Enter the dollar value of bitcoin\n";
					cin>>c1.BITCOIN;
					rupees = 70 * c1.BITCOIN;
				}
				void display() {
					cout<<"BITCOIN value in rupees \t"<<"Rs."<<rupees<<endl;
				}
		};
};
int main() {
	Coins_Bit::Bitcoin_Value b1;
	b1.calculate();
	b1.display();
	return 0;
}
