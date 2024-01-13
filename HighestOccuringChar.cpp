#include<bits/stdc++.h>
using namespace std;
int siz(char input[]) {
  int k = 0;
  while (input[k] != '\0') {
    k++;
  }
  return k;
}
char highestOccurringChar(char input[]) {
    int n= siz(input);
  int arr[26]={0};
  int p=0;

  for(int i=0;i<n;i++)
  {
    p= input[i]-'a';
    arr[p]++;
  }

  int k= distance(arr,max_element(arr,arr+26));
  //cout<<k<<endl;
  return (char(k+'a'));

}
