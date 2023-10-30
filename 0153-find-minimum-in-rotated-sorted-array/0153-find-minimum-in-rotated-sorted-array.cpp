class Solution {
public:
    int findMin(vector<int>& num) {
         int start=0,end=num.size()-1;
    // int low=0;
    // int high=nums.size();
//     int ans=100;
//     while(low<=high)
//     {
//         int mid=low+(high-low)/2;
//         if(nums[low]<=nums[mid])
//         {
           
//             ans=min(nums[low],ans);
//             low=mid+1;
//         }
//         else 
//         {
//             // if(nums[mid]<ans)
//             // {
//             //     ans=nums[mid];
//             // }
//              high=mid-1;
//             ans=min(nums[mid],ans);
           
//         }
            
//     }
//     return ans;
        
    // while(low<high)
    // {
    //     if(nums[low]<nums[high])
    //     {
    //         return nums[low];
    //     }
    //     int mid=low+(high-low)/2;
    //     if(nums[mid]>nums[high])
    //     {
    //         low=mid+1;
    //     }
    //     else
    //     {
    //         high=mid-1;
    //     }
    // }
    // return nums[low];
         while (start<end) {
            if (num[start]<num[end])
                return num[start];
            
            int mid = (start+end)/2;
            
            if (num[mid]>=num[start]) {
                start = mid+1;
            } else {
                end = mid;
            }
        }
        
        return num[start];   
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};