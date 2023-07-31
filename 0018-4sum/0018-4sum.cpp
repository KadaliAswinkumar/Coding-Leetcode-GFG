class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        if(n<4)return {};
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        vector<int>v;
        long long  sum = 0;
        for(int i = 0; i<n-3;i++){
            for(int j = i+1; j<n-2;j++){
                int h = n-1;
                int l = j+1;
                while(l<h){
                    sum =  long(nums[i])+ long(nums[j])+ long(nums[l])+ long(nums[h]);
                    if(sum == target){
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[l]);
                        v.push_back(nums[h]);
                        res.push_back(v);
                        v.clear();
                    while(l<h && nums[l]==nums[l+1])l++;
                    while(l<h && nums[h]==nums[h-1])h--;
                        h--;
                        l++;
                    }
                    else if(sum<target){
                        l++;
                    }
                    else{
                    h--;
                    }
                }
                while(j<n-2 && nums[j]==nums[j+1])j++;
            }
            while(i<n-3 && nums[i]==nums[i+1])i++;
        }

        return res;
    }
};