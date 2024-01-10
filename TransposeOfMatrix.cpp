#include <bits/stdc++.h> 
vector<vector<int>> transpose(int m, int n, vector<vector<int>> &mat){
    // Write your code here.
int t;
vector<vector<int>> k;
    for(int i=0;i<n;i++)
    {
        vector<int>rows;
        for(int j=0;j<m;j++)
        {
            t= mat[j][i];
            rows.push_back(t);
        }
        k.push_back(rows);
    }

    return k;
}
