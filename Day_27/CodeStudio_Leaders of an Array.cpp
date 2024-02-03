#include <bits/stdc++.h>
vector<int> findLeaders(vector<int> &arr, int n) 
{
vector<int> leaders;
int maxRight = arr[n - 1]:
leaders.push_back(maxRight);
for (int i =n - 2; i >= 0; i--) {
if (arr[i] > maxRight) {
maxRight = arr[il;
leaders.push_back(maxRight);
 }
}
reverse(leaders.begin(), leaders.end()); // To maintain the order of elements
return leaders;
}
