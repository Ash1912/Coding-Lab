// Dedicate Length
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
typedef long long ll;
    bool cmp1(pair<ll,ll> a,pair<ll,ll> b)
    {
    if(a.first==b.first)
        return a.second>b.second;
    return a.first>b.first;
    }

    bool cmp2(pair<ll,ll> a,pair<ll,ll> b)
    {
    if(a.second==b.second)
        return a.first>b.first;
    return a.second>b.second;
    }
    int main()
    {
         clock_t start=clock();
         ll t;
         cin>>t;
    while(t--)
    {
     ll w,n,m;
     cin>>w>>n>>m;
     vector<pair<ll,ll> >v[w+1];
     ll so=1;
    if(n>m)
    {
    so=0;
    }
    for(ll i=w/m;i>=0;i--)
    {
        ll l=w-(m*i);
       v[l%n].push_back({l/n,i});

    }
    ll f=1;
    for(ll i=0;i<=w;i++)
    {
      if(v[i].size()>0)
      {
          f=0;
          if(so==0)
          sort(v[i].begin(),v[i].end(),cmp1);
          else
         sort(v[i].begin(),v[i].end(),cmp2);
        cout<<v[i][0].first<<" "<<v[i][0].second<<"\n";
       break;

      }

    }
    if(f==1)
    cout<<"0 0\n";
    }
    cout<<"\nTime Taken = "<<((long double)(clock() - start)/CLOCKS_PER_SEC)<<endl;
	cout<<"\nAshish_20051685\n"<<endl;
    return 0;
    }