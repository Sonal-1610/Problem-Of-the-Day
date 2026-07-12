class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        deque<int> dq;
        vector<int> ans;
        int i=0,j=0;
        while(j<arr.size()){
            while(!dq.empty()&&dq.back()<arr[j]){
                dq.pop_back();
            }
            dq.push_back(arr[j]);
            if(j-i+1<k){
                j++;
            }
            else{
                int ele=dq.front();
                ans.push_back(ele);
                if(arr[i]==dq.front()){
                    dq.pop_front();
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};