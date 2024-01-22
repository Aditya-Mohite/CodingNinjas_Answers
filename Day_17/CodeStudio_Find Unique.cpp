// Finding the number which came only one time in array

int findUnique(int *arr, int size)
{
    int unique = 0;
    if(size <= 1)
    {
        return arr[0];
    }

    int i = 0;
    bool cnt;
    while(i < size)
    {
        cnt = false;
        for(int j=0; j<size; j++)
        {
            if(i != j && arr[i] == arr[j])
            {
                cnt = true;
                break;
            }
        }
        if(!cnt)
        {
            unique = arr[i];
            break;
        }
        i++;
    }

    if(unique == 0)
    {
        unique = arr[size - 1];
    }

    return unique;
}
