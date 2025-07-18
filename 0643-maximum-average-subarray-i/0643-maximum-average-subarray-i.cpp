class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxi=0;
        double window=0;
        int left=0;
        for(int right=0;right<k;right++)
        {
           window+=nums[right];

        }
        maxi = window;
        for(int i=k;i<nums.size();i++)
        {
            window+=nums[i]-nums[i-k];
            maxi=max(maxi,window);
        }
        return maxi/k;

    }
};