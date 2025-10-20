#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n = 5;
  // int arr[5] = {2, 4, 6, 8, 10};
  int arr[5] = {3, -2, 5, -1, 4};
  int max_sum = INT_MIN;
  for (int st = 0; st < n; st++)
  {
    int curr_sum = 0;
    for (int en = st; en < n; en++)
    {
      curr_sum += arr[en];
      max_sum = max(max_sum, curr_sum);
    }
  }
  cout << "Maximum Subarray Sum is: " << max_sum << endl;
}