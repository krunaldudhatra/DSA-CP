class Solution {
public:
    void subset(vector<int> nums,int ind,vector<int> lis,vector<vector<int>>& ans)
    {
        if(ind>=nums.size())
        {
            ans.push_back(lis);
            return;
        }
        subset(nums,ind+1,lis,ans);
        int ele=nums[ind];
        lis.push_back(ele);
        subset(nums,ind+1,lis,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> lis;
        int ind=0;
        subset(nums,ind,lis,ans);
        return ans;
    }
};