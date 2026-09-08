class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        int st=0,end=n-1;
    int ans=999;
    while(st<=end){
        int mid=(st+end)/2;
        ans=min(ans,arr[mid]);
        // ans=arr[mid];
        if(arr[st]<=arr[mid] && arr[st]<=arr[end]){
            end=mid-1;
        }
        else if(arr[st]>=arr[mid] && arr[mid]<=arr[end]){
                end=mid-1;
            }else{
            st=mid+1;
        }
    }
    return ans;
    }
};