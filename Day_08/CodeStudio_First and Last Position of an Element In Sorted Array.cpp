// Coding Ninjas Que - return the first and last occurrence of the element

int firstOcc(vector<int> &arr, int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end)/2;
    int ans = -1;

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;   // storing the mid value
            end = mid - 1;   // going to left from mid for finding first occurrence
        }
        else if(key < arr[mid])  // going to left
        {
            end = mid - 1;
        }
        else if(key > arr[mid])  // going to right
        {
            start = mid + 1;
        }

        mid = (start + end)/2;
    }
    return ans;
}

// finding last occurrence i.e. on right side
int lastOcc(vector<int> &arr, int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end)/2;
    int ans = -1;

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;   // storing the mid value
            start = mid + 1;   // going to right from mid for finding last occurrence
        }
        else if(key < arr[mid])  // going to left
        {
            end = mid - 1;
        }
        else if(key > arr[mid])  // going to right
        {
            start = mid + 1;
        }

        mid = (start + end)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);

    return p;
}
