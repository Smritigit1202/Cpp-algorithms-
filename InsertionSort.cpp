#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        int j= i-1 ;
        int k= arr[i];
        while(j>=0 && k<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
