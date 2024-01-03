// Assume that you are given a rudimentary programming language which contains only four operators, viz., +, −, abs and div. + and − have 
// their usual meanings, while div(a, b) returns the quotient of a/b and abs(a) returns the absolute value of a. 
// Write a program to solve this problem by using a function max(a, b) that takes two integers a and b as input and returns the 
// maximum of the two. Note that you can only use the operators provided; in particular, the constructs ”if”, “while”, or “for” are not 
// available.

#include <bits/stdc++.h>

using namespace std;

int max(int a, int b) {
    return div(((a + b) + abs(b - a)), 2).quot;
}

int main() {
    int x, y;
    clock_t start, end;
    start = clock();
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << "The maximum of " << x << " and " << y << " is " << max(x, y) << endl;
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
