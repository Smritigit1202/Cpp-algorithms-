
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include "solution.h"

int search(vector<int> &nums, int target) {
        int size= nums.size();
    int mid=( size)/2;
    
    if(nums[mid]==target )
    {
        return mid;
    }
       else if(nums.size ()==1)
   {
       return -1;
   }
   else if(nums[mid]>target)
   {
vector<int> v1(nums.begin(),nums.begin()+mid);
return search (v1,target);
   }
   else if(nums[mid]<target)
   {
vector<int> v2(nums.begin()+ mid,nums.end());
if( search(v2,target )!= -1)
{
return search (v2,target)+ (size/2);
}
else  {
    return -1;
}

   }

}
class Runner
{
    int t = 1;
    
    vector<int> v;
    int x;
    
public:
    void takeInput()
    {
        int n; cin >> n;
       
        v.assign(n, 0);
        for(int i = 0; i < n; ++i) cin >> v[i];
        cin >> x;
    }
    void execute()
    {
        vector<int> copy = v;
        search(copy, x);
    }

    void executeAndPrintOutput()
    {
        vector<int> copy = v;
        int ans = search(copy, x);
        cout << ans << '\n';
    }
};

int main()
{
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();
    return 0;
}
