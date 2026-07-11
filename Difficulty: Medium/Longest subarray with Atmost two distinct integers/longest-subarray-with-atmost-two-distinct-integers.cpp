class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
       unordered_map<int, int> mp;
        int i = 0, j = 0, count = 0, ans = 0;
        
        while (j < arr.size()) {
            mp[arr[j]]++;
            count++;
            
            while (mp.size() > 2) {
                mp[arr[i]]--;
                count--;
                
                
                if (mp[arr[i]] == 0) {
                    mp.erase(arr[i]);
                }
                i++;
            }
            ans = max(ans, count);
            j++;
        }
        return ans;
    }
};