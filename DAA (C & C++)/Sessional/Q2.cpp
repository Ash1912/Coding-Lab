// Given a string s, return the longest palindromic substring in s.
// Example 1:
// Input: s = "babad" Output: "bab" Explanation: "aba" is also a valid answer.
// Example 2:
// Input: s = "cbbd" Output: "bb"
// Constraints:
// 1 <= s.length <= 1000
// s consist of only digits and English letters.
#include <bits/stdc++.h>
using namespace std;
void longestPalindrome(string str)
{
  int n = str.size();
  int max = 1, start = 0;
  for (int i = 0; i < str.length(); i++) {
    for (int j = i; j < str.length(); j++) {
      int flag = 1;
      for (int k = 0; k < (j - i + 1) / 2; k++)
        if (str[i + k] != str[j - k])
          flag = 0;
      if (flag && (j - i + 1) > max) {
        start = i;
        max = j - i + 1;
      }
    }
  }
  for (int i = start; i <= start+max-1; ++i)
    cout << str[i];
}
int main()
{
   string str;
   cout << "Input : ";
   cin >> str; 
   cout << "Output : ";
  longestPalindrome(str);
  cout<<"\nAshish_20051685";
  return 0;
}