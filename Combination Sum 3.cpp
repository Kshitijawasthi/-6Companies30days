#include <bits/stdc++.h> 
void fun(int i, int curr_sum, int k,int n,vector<int>&subset,vector<vector<int>>&ans)
    {
        if(k==0)
        {
            if(curr_sum==n)
            {
                ans.push_back(subset);
                return;
            }
            else
                return;
        }
        if(curr_sum > n)
            return;
        if(i > 9)
            return;
        
        //include element
        subset.push_back(i);
        fun(i+1,curr_sum+i,k-1,n,subset,ans);
        
        //exclude element
        subset.pop_back();
        fun(i+1,curr_sum,k,n,subset,ans);
    }

vector<vector<int>> combinationSum3(int k, int n) {
    // Write your code here.
     vector<int>subset;
        vector<vector<int>>ans;
        fun(1,0,k,n,subset,ans);
        return ans;
}