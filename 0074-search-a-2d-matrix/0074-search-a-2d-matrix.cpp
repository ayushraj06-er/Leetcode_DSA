class Solution{
public:
bool searchTarget(vector<int>&mat,int col,int target){
 int st=0,end=col-1;
 while(st<=end){
    int mid=(st+end)/2;
    if(mat[mid]==target){
        return true;
    }else if(mat[mid]<target){
        st=mid+1;
    }else{
        end=mid-1;
    }
 }
 return false;
}
    bool searchMatrix(vector<vector<int>> &mat, int target){
        int row=mat.size();
        int col=mat[0].size();
        int st=0,end=row-1;
        int r=-1;
        while(st<=end){
            int mid=(st+end)/2;
            if(mat[mid][0]<=target && target<=mat[mid][col-1]){
                r=mid;
                break;
            }else if (mat[mid][0] > target) {
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }
        if(r==-1)return false;

        return searchTarget(mat[r],col,target);
       
    }
};