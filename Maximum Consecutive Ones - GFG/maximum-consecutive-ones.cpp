//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestOnes(int n, vector<int>& nums, int k) {
       int ans=0;
       int cnt0=0;
       int j=-1;
       for(int i=0;i<n;i++){
           if(nums[i]==0)cnt0++;
           while(cnt0>k){
               j++;
               if(nums[j]==0){
                   cnt0--;
               }
           }
           int len=i-j;
           ans=max(ans,len);
       } 
       return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        int k;
        cin >> k;

        Solution obj;
        cout << obj.longestOnes(n, nums, k) << endl;
    }
    return 0;
}
// } Driver Code Ends