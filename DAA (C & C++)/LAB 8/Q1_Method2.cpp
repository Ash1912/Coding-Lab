//Dedicate
// Nikhil wants to bring sofa(s) to his room. But
// he wants to dedicate the entire length of the room to the sofa(s).
// Now Nikhil's room length is W meters, and
// when he went to the shop he found out sofas of two types, one of length N
// and other of length M.
// Now, let Nikhil know how many sofas of the first and second type he
// should buy to reduce wastage of space. First minimize the space wastage
// then, if similar result arises always prefer the sofa with a larger
// length. In case N==M
// give preference to second sofa.Input format
// The first line contains an integer T, denoting the number of test cases.
// Each test case contains three integers W,N and M
// . Output format
// For every testcase print two integers a and b, number of sofa of type 1 and 2

// respectively.
// Constraints
// 1<=T<=10
// 1<=N,M,W<=10000
// Time Limit

// 1 second
// Example Input
// 1

// 24 3 5
// Output
// 3 3
#include <bits/stdc++.h>
using namespace std;
void minSpace(int w, int m, int n)
{
if(w < m) //24 < 3 ; False
{
cout<<"Empty : "<<w;
return;
}
int len_3 = w / m; // 24/3 = 8
int len_5 = 0,step=0;
int minEmpty = w % m; //24%3 = 0
int m_sofa = len_3; // 8 
int n_sofa = len_5; //0
while(true)
{
len_5++; //0
if(len_5 * n > w) //(0*5 > 24) => False ;
break;
int extra = w - (len_5 * n); // 24-(0*5)=24
int len_3 = extra/m; // 24/3=8
int empty = extra % m; // 24%3=0
if(empty <= minEmpty) //(0<=0) 
{
minEmpty = empty; //0
m_sofa = len_3; //8
n_sofa = len_5; //0
}
cout<<"Length of 3 type sofa ="<<m_sofa<<" Length of 5 type sofa ="<<n_sofa<<" | "<<step++<<endl;
}
cout <<"\nN-Sofa:"<<n_sofa
<<"\nM-Sofa:"<<m_sofa<<"\nSpace-Left:"<<minEmpty;
}
int main()
{
int w = 24, m = 3, n = 5;
minSpace(w, m, n);
return 0;
}