class Solution {
public:
    bool search(vector<int>& arr, int k) {
        int n=arr.size();
        int st=0,end=n-1;
        bool ans=false;
        while(st<=end){
            int mid=(st+end)/2;
            if(arr[mid]==k){
                ans=true;
            }
            if(arr[st]==arr[mid] && arr[mid]==arr[end]){
                st=st+1;
                end=end-1;
                continue;
            }
            if(arr[st]<=arr[mid]){
                if(k>=arr[st] && k<=arr[mid]){
                    end=mid-1;
                }else{
                    st=mid+1;
                }
            }else if(k>=arr[mid] && k<=arr[end]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;

    }
};