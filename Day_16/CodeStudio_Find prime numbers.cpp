// Find all prime numbers upto N

vector<int> primeNumbersTillN(int N) 
{ 
 	vector<bool> primeNo(N, true);
	vector<int> primeNums;
	for(long long i=2; i<=N; i++)
	{
		if(primeNo[i])
		{
			primeNums.push_back(i);
			for(long long j=i*i; j<=N; j+=i)
				primeNo[j] = 0;
		}
	}
	return primeNums;
}
