#include<iostream>
#include <bits/stdc++.h>
#include<math.h>
#include<string>
using namespace std;

int conv(char $)
{
    int k= int($);
    int t=k-96;
    return (t);

}
int pat(string str)
{
    int n= str.length();
    int sum=1;
    for(int i=0;i<n;i++)
    {
        int t= conv(str[i]);

        sum=sum+(t *(pow(31,n-i-1)));


    }
    //cout<<sum<<endl;
    return sum;
}
int main()
{
    string txt;
    string pattern;
    cin>>txt>>pattern;
    cout<<"text is :"<<txt<<endl<<"pattern is :"<<pattern<<endl;
    int n= txt.length();
    int m= pattern.length();

    
    for(int i=0;i<n-m+1;i++)
    {
        string sub = txt.substr(i,m);
       // cout<<sub<<endl;
        if(pat(sub)==pat(pattern))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
