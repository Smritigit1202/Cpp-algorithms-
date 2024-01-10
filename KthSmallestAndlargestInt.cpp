vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
vector <int> v;
auto i= arr.begin();
 for(i;i< arr.end();i++)
 {
	 for(int j=0;j<(arr.size());j++)
	 {
		 if(*i>arr[j])
		 {
			swap(*i,arr[j]);
		 }
	 }
 }

	int m=arr[n-k];
	v.push_back(m);
	m=arr[k-1];
	v.push_back(m);
	return v ;
}
