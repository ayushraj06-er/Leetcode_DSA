class Solution {
public:
    long long totalTime(vector<int>&arr,int n,int a){
        long long  tt=0;
        for(int i=0;i<n;i++){
            int x=arr[i]/a;
            if(arr[i]%a==0){
                tt+=x;
            }else{
                tt+=x+1;
            }
        }
        return tt;
    }
    int minEatingSpeed(vector<int>&arr, int h) {
        int n=arr.size();
        int st=1,end=*max_element(arr.begin(),arr.end());
        while(st<=end){
            int mid=(st+end)/2;
            long long hr=totalTime(arr,n,mid);
            if(hr<=h){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        return st;
    }
};