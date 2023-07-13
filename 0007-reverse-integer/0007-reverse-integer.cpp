class Solution {                      
public:
    int reverse(int x) {
        int n = x;
        long r=0;    
        while(n){
         r=r*10+n%10; 
         n=n/10;    
        }
        if(r>INT_MAX || r<INT_MIN) return 0; 
        return int(r);  
    }
}; 