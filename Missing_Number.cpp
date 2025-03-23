class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i,j=1,n=nums.size();
        sort(nums.begin(),nums.end());
        for(i=0;i<n;i++){
            if (nums[i]==j-1)
               j++;
            else
              return nums[i]+1;
        }
        return 0;
    }
};
