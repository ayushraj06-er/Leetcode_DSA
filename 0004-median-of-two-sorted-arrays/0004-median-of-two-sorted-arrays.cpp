class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        int n1=a.size();
        int n2=b.size();
        int n=n1+n2;
        int idx1=n/2;
        int idx2=idx1-1;
        int cnt=0;
        float e1=-1,e2=-1;
        int i=0,j=0;
        while(i<n1 && j<n2){
            if(a[i]<b[j]){
                if(cnt == idx1){
                e1=a[i];
                }
                if(cnt == idx2){
                e2=a[i];
                }
                cnt++;
                i++;
            }else{
                 if(cnt == idx1){
                e1=b[j];
                }
                if(cnt == idx2){
                e2=b[j];
                }
                cnt++;
                j++;
            }
        }
        while(i<n1){
            if(cnt == idx1){
                e1=a[i];
                }
                if(cnt == idx2){
                e2=a[i];
                }
                cnt++;
                i++;
        }
        while(j<n2){
          if(cnt == idx1){
                e1=b[j];
                }
                if(cnt == idx2){
                e2=b[j];
                }
                cnt++;
                j++;   
        }

        if(n % 2 == 0){
            return (e1 + e2)/2;
        }else{
            return  e1;
        }
    }
};