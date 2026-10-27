class Solution {
public:
    int myAtoi(string s) {
        int n=s.length();
        int sign=1;
        int i=0;
        long long num=0;

        //Leading Space handling !!

        while(i<n && s[i]==' '){
            i++;
        }

        //sign handling !!

        if(i<n && s[i]=='-'){
            sign=-1;
            i++;
        }else if(i<n && s[i]=='+'){
            i++;
        }

        //check valid int

        while(i<n && s[i]>='0' && s[i]<='9'){
            long long x=s[i]-'0';
            num=num*10+x;
            if(sign==1 && num>INT_MAX){
                return INT_MAX;
            }
            if(sign==-1 && num > 2147483647){
                return INT_MIN;
            }
            i++;
        }
        return num*sign;
    }
};