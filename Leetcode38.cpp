// count and say leetcode 38 question's Solution
class Solution {
public:
    string countAndSay(int n) {
        string s = to_string(n);
        
        for(int i=0;i<n-1;i++){
            string st="";
            int ct=1;
            char c=s[0];
            for(int i=1;i<s.size();i++){
                if(ct==0){
                    c=s[i];
                    ct=1;
                }
                else if(s[i]=s[i-1]){
                    ct++;
                }
                else{
                    st+=to_string(ct);
                    st+=c;
                    ct=1;
                    c=s[i];
                }
            }
            st+=to_string(ct);
                    st+=c;
            s=st;
            st="";
        }
        return s;
    }
};
