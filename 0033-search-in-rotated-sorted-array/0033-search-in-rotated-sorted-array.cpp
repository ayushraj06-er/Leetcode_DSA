class Solution {
public:
    int search(vector<int>& arr, int k) {
        int n=arr.size();
        int st=0,end=n-1;
        while(st<=end){
              int mid=(st+end)/2;
              if(arr[mid]==k){
                return mid;
              }
              if(arr[st]<=arr[mid]){
                if(k>=arr[st] && k<=arr[mid]){
                    end=mid-1;
                }else{
                    st=mid+1;
                }
              }else if (arr[mid]<=k && arr[end]>=k){
                st=mid+1;
              }else{
                end=mid-1;
              }
            
        }
        return -1;
    }
};