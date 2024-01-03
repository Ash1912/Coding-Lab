

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
#define MAXFACTORS 1024
#define PI 3.1415926535897932384626433832
#define ss ios_base::sync_with_stdio(false);cin.tie(NULL);

typedef struct
{
 
    int size;
    int factor[MAXFACTORS + 1];
    int exponent[MAXFACTORS + 1];
 
} FACTORIZATION;
 
// Function to find the factorization of M and N
void FindFactorization(int x, FACTORIZATION* factorization)
{
    int i, j = 1;
    int n = x, c = 0;
    int k = 1;
    factorization->factor[0] = 1;
    factorization->exponent[0] = 1;
 
    for (i = 2; i <= n; i++) {
        c = 0;
 
        while (n % i == 0) {
            c++;
 
            // factorization->factor[j]=i;
            n = n / i;
            // j++;
        }
 
        if (c > 0) {
            factorization->exponent[k] = c;
            factorization->factor[k] = i;
            k++;
        }
    }
 
    factorization->size = k - 1;
}
 



int gcd_middle(int m, int n)
{
 
    FACTORIZATION mFactorization, nFactorization;
 
    int r, mi, ni, i, k, x = 1, j;
 

    FindFactorization(m, &mFactorization);
    FindFactorization(n, &nFactorization);
 
 

    int min;
    i = 1;
    j = 1;
    while (i <= mFactorization.size && j <= nFactorization.size) {
        if (mFactorization.factor[i] < nFactorization.factor[j])
            i++;
 
        else if (nFactorization.factor[j] < mFactorization.factor[i])
            j++;
 
        else 
        {
            min = mFactorization.exponent[i] > nFactorization.exponent[j]
                      ? nFactorization.exponent[j]
                      : mFactorization.exponent[i];
 
            x = x * mFactorization.factor[i] * min;
            i++;
            j++;
        }
    }
 
    return x;
}






int gcd_euclid(ll a, ll b) {
   if (b == 0)
   return a;
   return gcd_euclid(b, a % b);
}





// int gcd_cons(int a,int b){
//     int n=a>=b?b:a;
//     for(int i=n;i>=1;i--){
//         if(a%i==0 && b%i==0){
//             return(i);
//         }
//     }
// }

int32_t main(){
    ss;
    ll a,b;
    cin>>a>>b;

    cout<<gcd_euclid(a,b)<<endl;
    // cout<<gcd_cons(a,b)<<endl;
    cout<<gcd_middle(a,b)<<endl;

    return 0;
}
int gcd_cons(int a,int b){
    int n=a>=b?b:a;
    for(int i=n;i>=1;i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }
    return -1;
}