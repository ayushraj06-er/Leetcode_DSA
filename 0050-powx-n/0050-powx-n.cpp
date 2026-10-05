class Solution {
public:

    double myPow(double x, long long  n) {
        if(n==0)return 1;
        if (n % 2 == 0) {
        return myPow(x * x, n / 2);
        }
        if(n<0){
            x=1.0/x;
            n=-n;
        }
        return x*myPow(x,n-1);
    //     long long exp = n;

    //     long double num = x;

    //     if (exp < 0) {
    //         num = 1.0L / num;
    //         exp = -exp;
    //     }

    //     return (double)power(num, exp, 1.0L);
    // }

    // long double power(long double x, long long n, long double ans) {

    //     if (n == 0) {
    //         return ans;
    //     }

    //     if (n % 2 != 0) {
    //         ans *= x;
    //     }

    //     return power(x * x, n / 2, ans);
    }
};