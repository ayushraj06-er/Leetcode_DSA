class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n=arr.size();
        int st=1,end=n-2;
        if(n==1)return arr[0];
        if(arr[0]!=arr[st]) return arr[0];
        if(arr[n-1]!=arr[end])return arr[n-1];
        while(st<=end){
            int mid=(st+end)/2;
            if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1])return arr[mid];
            else if(mid % 2 != 0 && arr[mid-1]==arr[mid] || mid % 2 == 0 && arr[mid]==arr[mid+1]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        return -1;
    }
};