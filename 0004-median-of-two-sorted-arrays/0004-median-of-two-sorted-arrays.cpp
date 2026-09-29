class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        int n1=arr1.size();
        int n2=arr2.size();
        vector<float>ans;
        int i=0,j=0;
        while(i<n1 && j<n2){
            if(arr1[i]<arr2[j]){
                ans.push_back(arr1[i]);
                i++;
            }else{
                ans.push_back(arr2[j]);
                j++;
            }
        }
        if(i!=n1){
            while(i<n1){
                ans.push_back(arr1[i]);
                i++;
            }
        }
        if(j!=n2){
            while(j<n2){
                ans.push_back(arr2[j]);
                j++;
            }
        }
        int n=ans.size();
        float st=0,end=n-1;
        float mid=(st+end)/2;
        if(n%2 == 0){
            return (ans[mid]+ans[mid+1])/2;
        }else{
            return ans[mid];
        }

    }
};