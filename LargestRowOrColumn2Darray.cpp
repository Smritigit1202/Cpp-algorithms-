#include<bits/stdc++.h>
using namespace std;

void findLargest(int **input, int nRows, int mCols)
{
	if(nRows==0 && mCols==0)
	{
		 cout << "row " << 0<<" "<< INT_MIN;
		 return;

	}
int arr1[mCols];
int arr2[nRows];
int sum=0;
for(int i=0;i<mCols;i++)
{
	for(int j=0;j<nRows;j++)
	{
		sum+=input[j][i];
	}
	arr1[i]=sum;
	sum=0;
}
sum=0;
for(int i=0;i<nRows;i++)
{
        for (int j = 0; j < mCols; j++) {
                sum += input[i][j];
        }
        arr2[i] = sum;
        sum = 0;
}

int p= *max_element(arr1,arr1+mCols);
int k= *max_element(arr2,arr2+nRows);
int a = max(p,k);
if(p==k )
{
	if(distance(arr1,max_element(arr1,arr1+mCols))<distance(arr2, max_element(arr2,arr2+nRows)))
	{
		 cout<<"column "<<distance(arr1,max_element(arr1,arr1+mCols))<<" "<<p;

	}
	else{
		  cout << "row " << distance(arr2, max_element(arr2,arr2+nRows))<<" " << k;
	}
}
else if(a==p)
{
    cout<<"column "<<distance(arr1,max_element(arr1,arr1+mCols))<<" "<<p;

} else {
    cout << "row " << distance(arr2, max_element(arr2,arr2+nRows))<<" " << k;
}

}
