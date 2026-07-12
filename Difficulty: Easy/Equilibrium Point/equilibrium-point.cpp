class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        vector<int> pre(arr.size());
         vector<int> suf(arr.size());
         int sum=0;
         for(int i=0;i<arr.size();i++){
             sum+=arr[i];
             pre[i]=sum;
         }
         sum=0;
         for(int i=arr.size()-1;i>=0;i--){
             sum+=arr[i];
             suf[i]=sum;
         }
         for(int i=0;i<arr.size();i++){
             if(pre[i]==suf[i]){
                 return i;
             }
         }
         return -1;
    }
};