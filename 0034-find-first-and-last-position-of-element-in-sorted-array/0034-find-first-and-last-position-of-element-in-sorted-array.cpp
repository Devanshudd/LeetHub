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
     auto low = lower_bound(nums.begin(),nums.end(),target);
        auto up = upper_bound(nums.begin(),nums.end(),target);
        
        if(low == nums.end() || *low != target)    return {-1,-1};
        
        int first = low - nums.begin();
        int last = up - nums.begin()-1;
        
        return {first ,last};   
        
        
        
        
    }
};