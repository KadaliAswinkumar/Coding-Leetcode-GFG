class Solution {
public:
    string removeOuterParentheses(string s) {
        int c=0;
        bool t;
        string ans="";
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            t=true;
            for(int j=i;j<s.size();j++){
                if(s[j]=='('){
                    c++;
                }
                else{
                    c--;
                }
                if(c==0){
                    break;
                }
                if(!t){
                    ans+=s[j];
                }
                i++; 
                t=false;
            }
        }
        return ans;
    }
};