class Solution {
public:
    int reverse(long long x) {
        long long revNum=0;
        if(x<0){
            x=-x;
            while(x>0){
           int last=x%10;
            revNum=(revNum*10)+last;
             if (revNum > INT_MAX)
                    return 0;
            x/=10;
    
        }
        return -revNum;
        }
        while(x>0){
           int last=x%10;
            revNum=(revNum*10)+last;
            if (revNum > INT_MAX)
                    return 0;
            x/=10;
        }
        return revNum;
    }
};