class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n=nums.size();
    int n1;
    map<int,int> mp;
    if(n%2==0)
    {
        n1=n/2;
    }
    else
    {
        n1=int((n/2)+1);
    }
        // cout<<n1;
    for(int i=0;i<n;i++)
    {
      mp[nums[i]]++;
    }
        
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        int a=it->first;
        cout<<a<<endl;
        int b=it->second;
        cout<<b;
        if(b>=n1)
        {
            return a;
        }
    }
    return 1;
    }
};