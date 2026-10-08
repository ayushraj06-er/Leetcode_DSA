class Solution {
public:
    int valid(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            return 1;
        }else{
            return 0;
        }
    }
    int changeLowerCase(char ch){
        if(ch>='a' && ch<='z'){
            return ch;
        }else{
            char temp=ch-'A'+'a';
            return temp;
        }
    }
    int checkPlaindrome(string s){
         int st=0;
        int end=s.length()-1;
        while(st<=end){
            if(s[st]!=s[end])return 0;
            st++;
            end--;
        }
        return 1;
    }
    bool isPalindrome(string s) {
        string temp="";

        //remove faltu chij...

        for(int j=0;j<s.length();j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
        }
        //Lower Case me Krdiya..

        for(int i=0;i<temp.length();i++){
            temp[i]=changeLowerCase(temp[i]);
        }

        //check kre Plaindrome or not

        return checkPlaindrome (temp);
       
    }
};