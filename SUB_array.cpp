#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n = 5;
  int arr[5] = {2, 4, 6, 8, 10};
  for (int st = 0; st < n; st++)
  {
    for (int en = st; en < n; en++)
    {
      for (int k = st; k <= en; k++)
      {
        cout << arr[k] << " ";
      }
      cout << endl;
    }
  }
}