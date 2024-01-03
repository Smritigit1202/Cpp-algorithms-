#include <iostream>
using namespace std;

void merge(int arr1[], int size1, int arr2[], int size2, int ans[])
{
 int k=0,j=0;
 int i=0;
       
        while(k<size1 && j<size2  )
        {
if(arr1[k]<=arr2[j])
{
    ans[i]=arr1[k];
    k++;
}
else if(arr1[k]>=arr2[j])
{
    ans[i]=arr2[j];
    j++;
}
i++;
        }
        if(k==size1)
        {
             for(i;i<(size1+size2);i++)
             {
                 ans[i]=arr2[j];
                 j++;
             }

        }
        else   if(j==size2)
        {
             for (i; i < (size1 + size2); i++) {
                 ans[i] = arr1[k];
                 k++;
             }
        }
    }


int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size1;
		cin >> size1;

		int arr1[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> arr1[i];
		}

		int size2;
		cin >> size2;

		int arr2[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> arr2[i];
		}

		int ans[size1+size2];

		merge(arr1, size1, arr2, size2, ans);

		for (int i = 0; i < size1 + size2; i++)
		{
			cout << ans[i] << " ";
		}

		cout << endl;

	}
}
