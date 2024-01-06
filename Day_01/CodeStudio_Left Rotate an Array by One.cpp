// Coding Ninjas - CodeStudio Que

#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) 
{
    int temp = arr[0];

    for(int i=1; i<arr.size(); i++)
    {
        // copying next element into previous position as we want only 1st element at last
        arr[i-1] = arr[i];
    }

    arr[n-1] = temp;
    return arr;
}
