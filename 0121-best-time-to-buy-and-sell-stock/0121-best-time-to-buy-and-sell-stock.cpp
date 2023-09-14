class Solution {
public:
    int maxProfit(vector<int>& nums) {
    int n=nums.size();
    int minele=INT_MAX;
    int prof=0;
    for(int i=0;i<n;i++)
    {
        minele=min(minele,nums[i]);
        prof=max(prof,nums[i]-minele);
    }
        return prof;
    }
};