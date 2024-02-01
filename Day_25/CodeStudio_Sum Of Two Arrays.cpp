#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) 
{
	vector<int> result;
    int carry = 0;
    // Iterate through each digit of the numbers
    for (int i = 1; i <= max(n, m) || carry; ++i) 
    {
        int digitA = (i <= n) ? a[n - i] : 0;
        int digitB = (i <= m) ? b[m - i] : 0;

        int sum = digitA + digitB + carry;
        result.push_back(sum % 10);
        carry = sum / 10;
    }
    // Reverse the result array since we stored digits from least significant to most significant
    reverse(result.begin(), result.end());
    // Remove any leading zeros
    while (!result.empty() && result.front() == 0) 
    {
        result.erase(result.begin());
    }
    // If the result is empty, it means the sum is zero
    if (result.empty()) 
    {
        result.push_back(0);
    }
    return result;
}
