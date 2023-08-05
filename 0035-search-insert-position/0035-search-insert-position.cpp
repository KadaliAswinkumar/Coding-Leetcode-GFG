class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len=nums.size();
        
        if(target>nums[len-1]) return len;
        
        int beg=0, end=len-1;
        
        while(beg<end){
            int index=beg+(end-beg)/2;
            
            if(nums[index]>=target){
                end=index;
            }else{
                beg=index+1;
            }
        }
        return beg; 
    }
};