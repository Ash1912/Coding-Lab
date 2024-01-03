// Write a program using a function for computing ⌊√n⌋ for any positive integer. Besides assignment and comparison, 
// your algorithm may only use the four basic arithmetic operations.

#include <bits/stdc++.h>

using namespace std;

int sqrt(int n) {
    int l = 0, r = n / 2, ans = 0, m = 0;
    while (l <= r) {
        m = (l + r) / 2;
        if (m * m == n) {
            return m;
        } else if (m * m < n) {
            l = m + 1;
            ans = l;
        } else {
            r = m - 1;
            ans = r;
        }
    }
    return ans;
}

int main() {
    int n;
    clock_t start, end;
    start = clock();
    cout << "Enter the number: ";
    cin >> n;
    cout << "The square root of " << n << " is " << sqrt(n) << endl;
    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by the program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    cout << "Roll Number : 20051685" << endl; 
    cout << "Batch - CSE6" << endl;
    cout << "Name - Ashish Kumar Mishra" << endl;
    return 0;
}
