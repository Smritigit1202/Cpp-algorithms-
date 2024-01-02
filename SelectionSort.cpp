#include <bits/stdc++.h>
using namespace std;

void RSS ( int *arr, int n)
{  if(n==1)
   {return ;}
    int min = arr[0];int k=0;
    for(int i=0; i<n ; i++)
    {
        if(arr[i]<min)
        {
            min= arr[i];
            k=i;
        }
    }
    arr[k]= arr[0];
    arr[0]= min;
   RSS( arr+1 , n-1);}
  
    


int main() {
	int n;
	cin>>n;
	assert(n>=1 && n<=10000);
	int arr[n];
	for(int i=0; i<n;i++)
{
    cin>>arr[i];
 	assert(arr[i]>= -10000 && arr[i]<=10000);
}

RSS(arr, n);

	for(int i=0; i<n;i++)
{
    cout<<arr[i]<<endl;
}
return 0;
}
