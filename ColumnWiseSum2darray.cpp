#include<iostream>
using namespace std;


int main(){
int m,n;
cin>>m>>n;
int arr[m][n];
//m=rows, n=cols.....
for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
	{
		cin>>arr[i][j];
	}
}
int sum=0;
int arr1[n];
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		sum+=arr[j][i];
	}
	arr1[i]=sum;
	sum=0;
}
for(int j=0;j<n;j++)
	{
		cout<<arr1[j]<<" ";
	}
  
}
