#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n = 5;
  int arr[5] = {3, -2, 5, -1, 4};
  int max_sum = INT_MIN;
  int curr_sum = 0;

  for (int i = 0; i < n; i++)
  {
    curr_sum += arr[i];
    max_sum = max(max_sum, curr_sum);
    if (curr_sum < 0)
    {
      curr_sum = 0;
    }
  }

  cout << "Maximum Subarray Sum is: " << max_sum << endl;
  return 0;
}
