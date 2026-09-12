class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n=arr.size();
        // arr[-1]=INT_MIN;
        // arr[n+1]=INT_MIN;
        int st=0,end=n-1;
        if(n==1)return 0;
        if(arr[st]>arr[st+1])return st;
        if(arr[end-1]<arr[end])return end;
        while(st<=end){
            if(arr[end-1]<arr[end] && arr[end]>arr[end+1])return end;
            int mid=(st+end)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]) return mid;
            else if(arr[mid-1]<arr[mid] && arr[mid]<arr[mid+1]){
                    st=mid+1;
            }else{
                end=mid-1;
            }
        }
        return -1;
    }
};