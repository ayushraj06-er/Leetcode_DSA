class Solution {
public:
    int findMaxEl(vector<vector<int>>&arr,int r,int mid){
        int maxElement=-1;
        int idx=-1;
        for(int i=0;i<r;i++){
            if(arr[i][mid]>maxElement){
                maxElement=arr[i][mid];
                idx=i;
            }
        }
        return idx;
    }
    vector<int> findPeakGrid(vector<vector<int>>&arr) {
        int row=arr.size();
        int col=arr[0].size();
        int st=0,end=col-1;
        while(st<=end){
            int mid=(st+end)/2;
            int m=findMaxEl(arr,row,mid);
             int left=-1;
            int right=-1;
            if(mid-1 >= 0) left=arr[m][mid-1];
            if(mid+1<=end)right=arr[m][mid+1];
            if(arr[m][mid]>left && arr[m][mid]>right)return {m,mid};
            else if(left>arr[m][mid])end=mid-1;
            else st=mid+1;
        }
        return {-1,-1};
    }
};