class Solution {
public:

    long long returnBkt(vector<int>& arr,int n,int k,int mid){
        long long cntBkt=0;
        long long totalBkt=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=mid){
                cntBkt+=1;
            }else{
                totalBkt+=cntBkt/k;
                cntBkt=0;
            }
        }
        totalBkt+=cntBkt/k;
        return totalBkt;
    }
    int minDays(vector<int>& arr, int m, int k) {
        int n=arr.size();
        int st=*min_element(arr.begin(),arr.end());
        int end=*max_element(arr.begin(),arr.end());
         if((double)m*k >(double)n)return -1;
        while(st<=end){
            int mid = st + (end-st)/2;
            long long totalBkt=returnBkt(arr,n,k,mid);
            if(totalBkt>=m){
                end=mid-1;
            }else{
                st=mid+1;
            }
            
        }
        return st;
    }
};