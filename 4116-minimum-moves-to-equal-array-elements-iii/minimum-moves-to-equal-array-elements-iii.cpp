class Solution {
public:
    int minMoves(vector<int>& nums) {
        int cnt =0;
        int m;
        int max = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }
        for(int i=0;i<nums.size();i++){
            if(nums[i]<max){
                 m=max-nums[i];
               cnt=cnt+m;
               
            }

        }
        return cnt;
    }
};