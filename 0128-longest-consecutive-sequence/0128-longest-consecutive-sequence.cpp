class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    int cnt=0;
    int ans=0;
    if(nums.size()==0)
    {
        return 0;
    }
        
 
        sort(nums.begin(),nums.end());

    for(int i=0;i<nums.size()-1;i++)
    {
        if(nums[i+1]-nums[i]==1)
        {
            cnt++;
            ans=max(ans,cnt);
        }
        else if(nums[i+1]-nums[i]==0)
        {
            continue;
        }
        else
        {
            cnt=0;
        }
    }
        return ans+1;
    }
};