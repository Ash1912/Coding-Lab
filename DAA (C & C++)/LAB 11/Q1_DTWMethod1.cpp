#include <bits/stdc++.h>
using namespace std;

// Dynamic Time Warping is an algorithm for measuring similarity between two
// temporal sequences which may vary in speed

int main()
{
    // Algorithm for Dynamic Time Warping
    // 1. Create a matrix of size (n+1)*(m+1) and initialize it with 0
    // 2. Calculate the cost matrix
    // 3. Calculate the minimum cost path

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, INT_MAX));

    dp[0][0] = 0;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + abs(a[i - 1] - b[j - 1]));
            dp[i][j] = min(dp[i][j], dp[i - 1][j] + abs(a[i - 1] - b[j - 1]));
            dp[i][j] = min(dp[i][j], dp[i][j - 1] + abs(a[i - 1] - b[j - 1]));
        }

    cout << dp[n][m] << endl;

    return 0;
}