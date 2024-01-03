#include <bits/stdc++.h>
#include <chrono> 
using namespace std::chrono; 
using namespace std;
int DTW(vector<int> &a, vector<int> &b, int n, int m) {
   int dp[n + 1][m + 1];
   for (int i = 0; i <= n; i++) {
      for (int j = 0; j <= m; j++) {
        dp[i][j] = INT_MAX;
      }
    }  
    dp[0][0] = 0;
    for (int i = 1; i <= n; i++) {
       for (int j = 1; j <= m; j++) {
        dp[i][j] = min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1])) + abs(a[i - 1] - b[j - 1]);
     }
   }
   return dp[n][m];
}
int main() {
    auto start = high_resolution_clock::now();
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
       cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
       cin >> b[i];
    }
     cout <<"Output:"<< DTW(a, b, n, m) << endl;
     auto stop = high_resolution_clock::now();
     auto duration = duration_cast<microseconds>(stop - start);
     cout << "\nTime: " << duration.count() << " microseconds "<< endl;
     cout << "Ashish_20051685" << endl; 
     return 0;
}