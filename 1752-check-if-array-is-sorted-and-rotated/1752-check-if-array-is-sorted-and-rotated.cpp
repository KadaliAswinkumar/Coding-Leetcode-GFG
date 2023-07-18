class Solution {
public:
    bool check(vector<int>& nums) {
        int i,n=nums.size(),count=0;
        for(i=0;i<n;i++)
        {
            if(nums[(i+1)%n]<nums[i])
                count=count+1;
        }
        if(count>1)
            return false;
        return true;
    }
};