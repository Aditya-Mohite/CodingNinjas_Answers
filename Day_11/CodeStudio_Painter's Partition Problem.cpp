bool isPossible(vector<int> &boards, int k, int mid)
{
    int painterCnt = 1;
    int totalTime = 0;
    int n = boards.size();

    for(int i=0; i<n; i++)
    {
        if(totalTime + boards[i] <= mid)
        {
            totalTime += boards[i];
        }
        else
        {
            painterCnt++;
            if(painterCnt > k || boards[i] > mid)
            {
                return false;
            }
            totalTime = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int start = 0;
    int sum = 0;
    int n = boards.size();
    // sum of all array elements
    for(int i=0; i<n; i++)
    {
        sum += boards[i];
    }

    int end = sum;
    int ans = 0;
    int mid = start + (end-start)/2;

    if(k > n)
    {
        return ans;
    }

    while(start <= end)
    {
        if(isPossible(boards, k, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
