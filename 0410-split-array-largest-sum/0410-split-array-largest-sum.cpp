class Solution {
public:
    int returnSum(vector<int>& arr,int n){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return sum;
    }
    int cntSubArr(vector<int>& arr ,int n,int mid){
       int cnt=0;
       int sum=0;
       for(int i=0;i<n;i++){
        if(sum+arr[i]<=mid){
            sum+=arr[i];

        }else{
            cnt++;
            sum=arr[i];
        }
       }
       if(sum<=mid){
        cnt++;
       }
       return cnt;
    }
    int splitArray(vector<int>& arr, int k) {
        int n=arr.size();
        int st=*max_element(arr.begin(),arr.end());
        int end=returnSum(arr,n);
        while(st<=end){
            int mid=(st+end)/2;
            int subArr=cntSubArr(arr,n,mid);
            if(subArr<=k){
                end=mid-1;
            }else{
                st=mid+1;
            }

        }

        return st;

    }
};