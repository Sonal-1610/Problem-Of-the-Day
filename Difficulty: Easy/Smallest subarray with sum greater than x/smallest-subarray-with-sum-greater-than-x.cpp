class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int ans=INT_MAX;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int sum=arr[i];
            if(sum>x) return 1;
            for(int j=i+1;j<n;j++){
                sum+=arr[j];
                if(sum>x){
                    if(ans==INT_MAX||ans>j-i+1){
                        ans=j-i+1;
                    }
                    break;
                }
            }
        }
        if(ans==INT_MAX) return 0;
        return ans;
    }
};