int removeDuplicates(vector<int> &arr, int n) 
{
	int i = 0;
	for(int j=1; j<n; j++)
	{
		if(arr[j] != arr[i])
		{
			// Assign new element to i's next position
      arr[i+1] = arr[j];
			i++;
		}
	}
	return (i+1); // size of new arrayv after removing duplicate elements
}
