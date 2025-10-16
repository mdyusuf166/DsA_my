#include <iostream>
using namespace std;

int decimalToBinary(int n)
{
  int ans = 0, pow = 1;
  while (n > 0)
  {
    int rem = n % 2;
    n /= 2;
    ans += rem * pow;
    pow *= 10;
  }
  return ans;
}

int main()
{

  for (int i = 0; i < 10; i++)
  {
    cout << "binary of " << i << " is: " << decimalToBinary(i) << endl;
  }

  // int n = 50;
  // cout << "binary of " << n << " is: " << decimalToBinary(n) << endl;

  return 0;
}
