class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
     int pi=0;
     int neg=1;
     vector<int> ans(nums.size());
     for(int i=0;i<nums.size();i++)
     {
         if(nums[i]>0)
         {
             ans[pi]=nums[i];
             pi=pi+2;
         }
         else
         {
             ans[neg]=nums[i];
                 neg=neg+2;
         }
     }
        return ans;
    }
};