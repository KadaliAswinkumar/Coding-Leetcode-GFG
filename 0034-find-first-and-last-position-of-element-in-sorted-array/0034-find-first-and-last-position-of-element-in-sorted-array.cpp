class Solution {
public:
    int FirstOccurance(vector<int>&nums,int target){
        int low=0,high=nums.size()-1;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                ans=mid;
                high=mid-1;
            }
            else if(target>nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
    int LastOccurance(vector<int>&nums,int target){
        int low=0,high=nums.size()-1;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                ans=mid;
                low=mid+1;
            }
            else if(target>nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> v;
        int first=FirstOccurance(nums,target);
        int last=LastOccurance(nums,target);
        v.push_back(first);
        v.push_back(last);
        return v;
    }
};