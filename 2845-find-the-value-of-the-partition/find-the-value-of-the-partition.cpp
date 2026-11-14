class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=nums[1]-nums[0];
        for(int i=1;i<nums.size();i++){
            ans=min(nums[i]-nums[i-1],ans);
        }
        return ans;
    }
};