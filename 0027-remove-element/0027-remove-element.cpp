class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>::iterator it;
        int count=nums.size();

        for(it=nums.begin();it<nums.end();it++){
            if(*it==val){
                nums.erase(it);
                count--;
                it--;
            }
        }
        return count;
    }
};