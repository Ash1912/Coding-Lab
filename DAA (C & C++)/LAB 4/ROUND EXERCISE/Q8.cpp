// In a social gathering, there are b boys and g girls (b > g) of different ages. You have two
// unsorted arrays giving their ages (one for the boys, the other for the girls). Write a
// program by devising an efficient O(b log g) algorithm to find out the ages that are
// common between both the boys and girls.
// Example:
// If Arrayboy = {10, 20, 11, 89, 23, 21} and Arraygirl = {12, 30, 11, 20},
// Then Arraycommon = {11, 20}
#include <bits/stdc++.h>
using namespace std;
vector<int> intersect(vector<int> nums1, vector<int> nums2) {

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    vector<int> result;

    int index1=0, index2=0;
    int num1, num2;

    while (index1 < nums1.size() && index2 < nums2.size()) {
        num1 = nums1[index1];
        num2 = nums2[index2];
        if (num1 < num2)
            index1++;
        else if (num1 > num2)
            index2++;
        else {
            result.push_back(num1);
            index1++;
            index2++;
        }
    }

    return result;
}
int main()
{
  clock_t start, end;
  vector<int> a1={10, 20, 11, 89, 23, 21};
  vector<int> a2={12, 30, 11, 20};
  start = clock();
  cout<<"COMMON ELEMENTS\n";
  vector<int> res;
  res=intersect(a1,a2);
  for(auto i:res)
  {
    cout<<i<<" ";
  }cout<<endl;
  end = clock();
  double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
  cout << "Time taken by the program is : " << fixed
         << time_taken << setprecision(5);
  cout << " sec " << endl;
  cout << "Ashish_20051685" << endl; 
}