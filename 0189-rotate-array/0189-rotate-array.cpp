class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        auto n = nums.size();
        vector<int> temp(n);
        for (int i = n - 1; i >= 0; i--) 
        {
            temp[(i+k) % n] = nums[i];
        }
        swap(nums, temp);
    }
};