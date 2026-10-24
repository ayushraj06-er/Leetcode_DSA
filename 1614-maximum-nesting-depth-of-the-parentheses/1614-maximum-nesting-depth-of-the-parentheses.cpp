class Solution {
public:
    int maxDepth(string s) {
        // Your code goes here
        string ans="";
        int cnt=0;
        int anss=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                cnt++;
            }else if(s[i]==')'){
                cnt--;
            }
            anss=max(anss,cnt);
        }
        return anss;
    }
};
