// Coding Ninjas Book Allocation problem

bool isPossible(vector<int>& arr, int n, int m, int mid)
{
    int studentCnt = 1;
    int pageSum = 0;

    // check if the solution is possible or not
    for(int i=0; i<n; i++)
    {
        // checking if the 'pageSum' is less than or equal to 'mid'
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCnt++;
            if(studentCnt > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;

}

int findPages(vector<int>& arr, int n, int m) 
{
    int start = 0;
    int sum = 0;

    // Sum of all pages of all books
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }

    int end = sum;
    int ans = -1;  // default answer if there is no solution
    int mid = start + (end-start)/2;

    // If no of studnets is greater than no of books then return -1
    if (m > n) 
    {
        return ans;
    }

    while(start<=end)
    {
        if(isPossible(arr, n, m, mid))  // if 'mid' is a possible solution
        {
            ans = mid;  // if possible solution then store the answer
            end = mid - 1;  // move to the left part of the mid
        }
        else  // if 'mid' is not a possible solution
        {
            start = mid + 1;   // move to the right part of the mid
        }

        mid = start + (end-start)/2;   // update mid
    }

    return ans;
}
