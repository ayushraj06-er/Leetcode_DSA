class Solution {
public:
    bool checkPerfectNumber(int num) {
        int i=1;
        long long sum=0;
        while(i<num){
            if(num%i==0){
                sum+=i;
                i++;
            }else{
                i++;
            }
        }
        if(sum==num)return true;
        else return false;
    }
};