class Solution {
public:
int sum(vector<int>& arr,int n){
        int sum=0;
        for(int i=0;i<n;i++){
                sum+=arr[i];
        }
        return sum;
}
int  returnDay(vector<int>& arr,int n,int mid){
        int cnt=0;
        int day=1;
        for(int i=0;i<n;i++){
                if(cnt+arr[i]<=mid){
                        cnt+=arr[i];
                }else{
                        day++;
                        cnt=arr[i];
                }
        }
        
        return day;
}
    int shipWithinDays(vector<int>& arr, int days) {
        int n=arr.size();
        int st=*max_element(arr.begin(),arr.end()),end=sum(arr,n);
        while(st<=end){
            int mid=(st+end)/2;
            int d=returnDay(arr,n,mid);
            if(d<=days){
                end=mid-1;
            }else{
                st=mid+1;
            }

        }
        return st;
        
    }
};