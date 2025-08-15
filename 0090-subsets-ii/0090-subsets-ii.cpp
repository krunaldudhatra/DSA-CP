class Solution {
public:
void combination(int ind,vector<int>& arr,vector<vector<int>>& ans,vector<int>& lis)
    {
        ans.push_back(lis);
       for(int i=ind;i<arr.size();i++)
       {
        if( i!=ind && arr[i]==arr[i-1])
        {
            continue;
        }
        lis.push_back(arr[i]);
        combination(i+1,arr,ans,lis);
        lis.pop_back();
       }
    
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> lis;
        sort(nums.begin(),nums.end());
        combination(0,nums,ans,lis);
        return ans;
    }
};