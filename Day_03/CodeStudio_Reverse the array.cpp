// Coding Ninjas Que - Reverse the entire Array

#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(int n, vector<int> &arr)
{
    int s = 0;
    int e = arr.size()-1;

    while(s<=e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    return arr;
}

void display(int n, vector<int> arr)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main() 
{
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++) 
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    
    reverse(n, v);
    display(n, v);

    return 0;
}
