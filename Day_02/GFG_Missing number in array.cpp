// GFG practice question

#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int missingNumber(vector<int>& array, int n) 
    {
        int totalSum = n*(n+1)/2;
        int sum = 0;
        
        for(int i=0; i<n-1; i++)
        {
            sum = sum + array[i];
        }
        totalSum = totalSum - sum;
        return totalSum;
    }
};
