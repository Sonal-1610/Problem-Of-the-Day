class Solution {
  public:
    int minSubsets(vector<int>& arr) {
        // code here
        int count=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i]+1!=arr[i+1]){
                count++;
            }
        }
        return count;
    }
};
