class Solution {
public:

    double myPow(double x, int n) {
        long long exp = n;

        long double num = x;

        if (exp < 0) {
            num = 1.0L / num;
            exp = -exp;
        }

        return (double)power(num, exp, 1.0L);
    }

    long double power(long double x, long long n, long double ans) {

        if (n == 0) {
            return ans;
        }

        if (n % 2 != 0) {
            ans *= x;
        }

        return power(x * x, n / 2, ans);
    }
};