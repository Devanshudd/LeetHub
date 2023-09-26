class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
//      int n=nums.size();
//      int count=1;
//      unordered_set<int> st;
//      int limit = n/3;
//      sort(nums.begin(),nums.end());
//      vector<int> v;
//      if(n==1)
//      {
//           st.insert(nums[0]);
//           return {nums[0]};
//      }
//      if(n==2 && nums[0]!=nums[1])
//      {
//          return {nums[1],nums[2]};
//      }
//      for(int i=1;i<n;i++)
//      {
//          if(nums[i-1]==nums[i])
//          {
//              cout<< nums[i-1] << " "<<nums[i]<<endl;
//              count++;
//              if(count>limit)
//              {
//                  st.insert(nums[i]);
//              }
             
//          }
//          else
//          {
//              count=1;
//          }
//      }
//      for(int it:st)
//      {
//          v.push_back(it);
//      }
//     return v;
        
        if(nums.size() == 1){
            return {nums[0]};
        }
        if(nums.size() == 2 && nums[0] != nums[1]){
            return {nums[0], nums[1]};
        }
        sort(nums.begin(), nums.end());
        int countMajority = nums.size()/3;
        unordered_set<int> set;
        vector<int> output;
        int count = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] == nums[i]){
                count++;
                if(count > countMajority){
                    set.insert(nums[i]);
                }
            }
            else{
                count = 1;
            }
        }
        for(int it : set){
            output.push_back(it);
        }
        return output;
    }
};