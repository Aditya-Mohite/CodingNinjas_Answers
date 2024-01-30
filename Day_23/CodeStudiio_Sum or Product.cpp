#include <bits/stdc++.h> 
long long int sumOrProduct(long long int n, long long int q)
{
	long long int result = 1;
	const long long MOD = 1e9 + 7;

    if (q == 1) 
    {
        // Calculate the sum of all integers from 1 to N
        result = (n * (n + 1) / 2) % MOD;
    } 
    else if (q == 2) 
    {
        // Calculate the product of all integers from 1 to N
        for (long long int i = 1; i <= n; ++i) 
        {
            result = (result * i) % MOD;
        }
    }

    return result;
}
