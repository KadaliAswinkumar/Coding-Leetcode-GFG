class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=1;
        int ans=1;
        long long current=0;
        long long prev=0;
        while(j<nums.size()){
                current=prev+(long long)(nums[j]-nums[j-1])*(j-i);
                while(current>k){
                    current -=(nums[j]-nums[i]);
                    i++;
                }
                prev=current;
                ans=max(ans,j-i+1);
                j++;
        }
        return ans;
    }
};