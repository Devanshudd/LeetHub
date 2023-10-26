class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    // int lw=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    // int rw=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
    // if(nums[lw]!=target || nums[lw]==n || n==0)
    // {
    //     return{-1,-1};
    // }
    // return {lw,rw-1};
     int temp = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
     int temp1= upper_bound(nums.begin(),nums.end(),target) - nums.begin();
        if(temp==nums.size() || nums[temp]!=target)  return {-1,-1};
        return {temp,temp1 - 1};
        
        
        
        
    }
};