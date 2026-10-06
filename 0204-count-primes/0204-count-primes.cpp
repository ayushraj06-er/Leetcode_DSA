// class Solution {
// public:
//     int countPrimes(int n) {
//         if(n==0 || n==1 || n==2)return 0;
//         int ans=0;
//         for(int i=2;i<n;i++){
//             int cnt=0;
//             for(int j=2;j*j<=i;j++){
//                 if(i%j!=0)cnt++;
//             }
//             if(cnt==0)ans++;
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int countPrimes(int n) {

        if (n <= 2)
            return 0;

        int ans = 1;  // 2 is prime

        for (int i = 3; i < n; i += 2) {

            bool isPrime = true;

            for (int j = 3; j * j <= i; j += 2) {

                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime)
                ans++;
        }

        return ans;
    }
};