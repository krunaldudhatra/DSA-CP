class Solution {
public:
   void combination(int ind,int target,vector<int>& arr,vector<vector<int>>& ans,vector<int>& lis)
    {
        if(ind==arr.size())
        {
            if(target==0)
            {
                ans.push_back(lis);
            }
            return;
        }
      if(arr[ind]<=target)
      {
        lis.push_back(arr[ind]);
        combination(ind,target-arr[ind],arr,ans,lis);
        lis.pop_back();
      }
       combination(ind+1,target,arr,ans,lis);
    
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> lis;
        combination(0,target,candidates,ans,lis);
        return ans;
    }
};