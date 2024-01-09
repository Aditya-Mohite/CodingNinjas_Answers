void pushZerosAtEnd(vector<int> &arr) 
{
	int i = 0, n = arr.size();

	while(i<n)
	{
		if(arr[i]==0)
		{
			arr.erase(arr.begin()+i);
			arr.push_back(0);
			n--;
		}
		else
		i++;
	}
	
}
