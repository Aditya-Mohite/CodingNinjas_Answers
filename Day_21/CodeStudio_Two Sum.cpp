#include <bits/stdc++.h>

vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	sort(arr.begin(),arr.end());
    vector<pair<int, int>> v;
    int s = 0;
    int e = n-1;
    while(s<e)
    {
        if(arr[s]+arr[e]==target)
        {
            v.push_back(make_pair(arr[s], arr[e]));
            s++;
            e--;
        }
        else if(arr[s]+arr[e] > target)
        {
            e--;
        }
        else
        {
            s++;
        }
    }
    if(v.size() == 0)
    {
        v.push_back(make_pair(-1, -1));
        return v;
    }
}
