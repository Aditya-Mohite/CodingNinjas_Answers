// Merge two sorted array in 'arr1'

#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) 
{
	int i = m-1, j = n-1;
	int k = m+n-1;

	while(i>=0 && j>=0)
	{
		if(arr1[i] >= arr2[j] && arr1[i] != 0)
		{
			arr1[k] = arr1[i];
			i--;
			k--;
		}
		else
		{
			arr1[k] = arr2[j];
			j--;
			k--;
		}
	}

	while(j>=0)
	{
		arr1[k] = arr2[j];
		k--;
		j--;
	}

	return arr1;
}
