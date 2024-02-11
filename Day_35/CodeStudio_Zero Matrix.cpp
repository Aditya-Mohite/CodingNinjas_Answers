#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) 
{
	vector<bool> zeroRows(n, false);
    vector<bool> zeroCols(m, false);

    // Mark rows and columns that contain 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                zeroRows[i] = true;
                zeroCols[j] = true;
            }
        }
    }

    // Make elements of marked rows and columns equal to 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (zeroRows[i] || zeroCols[j]) {
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}
