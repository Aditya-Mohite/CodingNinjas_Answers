// Coding Ninjas - CodeStudio Que

vector<int> rotateArray(vector<int>arr, int k) 
{
    int n = arr.size();
    vector<int> temp(n);


    for(int i=0; i<n; i++)
    {
        temp[i] = arr[(i+k)%n];
    }

    // copying temp into arr
    arr = temp;
    return arr;
}
