// Find the element in an array that appears only one time

#include<vector>
#include<bits/stdc++.h>

int getSingleElement(vector<int> &arr)
{
	int n=arr.size();

	for(int i=0;i<n;i+=2)
	{
		if(i<n-1 && arr[i]==arr[i+1])
		{
			continue;
		}
		else
		{
			return arr[i];
		}
	}
	return -1;
}	
