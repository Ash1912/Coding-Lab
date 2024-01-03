//2. WAP to throw and handle’ array out of bound’ exception.[i.e if the size of array is greater than the index value of array then throw exception].
#include <iostream>
using namespace std;
int main()
{
 int n;
 cout << "Enter N:";
 cin >> n;
 int a[n];
 for (int i = 0; i < n+2; i++)
 {
 try
 {
 if (i <= n)
 {
 cout << "Enter Element " << i + 1 << ":";
 cin >> a[i];
 }
 else
 throw i;
 }
 catch(int i)
 {
 cout<<"ARRAY OUT OF BOUND"<<endl;
 }
 }
 return 0;
}
