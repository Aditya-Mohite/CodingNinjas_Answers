#include <bits/stdc++.h>
using namespace std;

int findFibonacci(int n) 
{
  if (n == 1 || n == 2) 
  {
    return 1;
  }
  int a = 1, b = 1, c;
  for (int i = 3; i <= n; i++) 
  {
    c = a + b;
    a = b;
    b = c;
  }
  return b;
}

int main() 
{
  int n;
  cin >> n;

  int result = findFibonacci(n);
  cout<<result;
  return 0;
}
