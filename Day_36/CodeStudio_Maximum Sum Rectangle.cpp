#include <bits/stdc++.h> 

int maxSumRectangle(vector<vector<int>>& arr, int n, int m)
{
	int maxSum = INT_MIN;

    for (int left = 0; left < m; ++left) {
        vector<int> temp(n, 0);
        for (int right = left; right < m; ++right) {
            for (int i = 0; i < n; ++i) {
                temp[i] += arr[i][right];
            }

            int currentSum = 0;
            int localMax = INT_MIN;

            for (int i = 0; i < n; ++i) {
                currentSum = max(temp[i], currentSum + temp[i]);
                localMax = max(localMax, currentSum);
            }

            maxSum = max(maxSum, localMax);
        }
    }

    return maxSum;
}
