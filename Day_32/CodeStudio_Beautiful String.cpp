int makeBeautiful(string str) 
{
    int n = str.size();
    int cnt1 = 0, cnt2 = 0;

    for(int i=0; i<n; i++)
    {
        if(i%2 == 0 && str[i] != '0')
        {
            cnt1++;
        }

        if(i%2 == 1 && str[i] != '1')
        {
            cnt1++;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(i%2 == 0 && str[i] != '1')
        {
            cnt2++;
        }

        if(i%2 == 1 && str[i] != '0')
        {
            cnt2++;
        }
    }

    return min(cnt1, cnt2);
}
