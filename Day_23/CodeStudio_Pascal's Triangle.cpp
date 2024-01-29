#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> result;
    
    for(int i = 0; i < n; ++i)
    {
        vector<long long int> row(i + 1, 1);
        
        for(int j = 1; j < i; ++j)
            row[j] = result[i - 1][j - 1] + result[i - 1][j];
        
        result.push_back(row);
    }
    
    return result;
}
