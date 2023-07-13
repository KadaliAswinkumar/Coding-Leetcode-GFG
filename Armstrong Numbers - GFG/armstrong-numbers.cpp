//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int x=n;
        int temp=n;
        int ams = 0;
        int count =0;
        while(temp)
        {
            int l = temp%10;
            temp/=10;
            count++;
        }
        while(x)
        {
            int l = x%10;
            ams = ams + pow(l,count);
            x/=10;
        }
        if(ams==n)
        {
            return "Yes";
        }
        else
        {
            return "No";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends