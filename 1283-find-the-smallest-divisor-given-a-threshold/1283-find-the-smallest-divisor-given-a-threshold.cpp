class Solution {
public:
    int sumofDivision(vector<int>& arr,int n,int mid){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=ceil((double)arr[i]/mid);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& arr, int limit) {
        int n=arr.size();
        int st=1,end=*max_element(arr.begin(),arr.end());
        while(st<=end){
            int mid=(st+end)/2;
            int division=sumofDivision(arr,n,mid);
            if(division<=limit){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        return st;
    }
};