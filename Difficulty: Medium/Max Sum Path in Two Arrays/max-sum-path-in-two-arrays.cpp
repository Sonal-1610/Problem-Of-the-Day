class Solution {
  public:
    int maxPathSum(vector<int> &a, vector<int> &b) {
        int i = 0, j = 0;
        int n = a.size();
        int m = b.size();
        
        long long sum_a = 0, sum_b = 0;
        long long total_max_sum = 0;
        
        while (i < n && j < m) {
            if (a[i] < b[j]) {
                sum_a += a[i++];
            } 
            else if (b[j] < a[i]) {
                sum_b += b[j++];
            } 
            else { // a[i] == b[j] (Intersection Point)
                total_max_sum += max(sum_a, sum_b) + a[i];
                sum_a = 0;
                sum_b = 0;
                i++;
                j++;
            }
        }
        
        // Add remaining elements of array a
        while (i < n) {
            sum_a += a[i++];
        }
        
        // Add remaining elements of array b
        while (j < m) {
            sum_b += b[j++];
        }
        
        // Add the maximum of the final remaining tracks
        total_max_sum += max(sum_a, sum_b);
        
        return total_max_sum;
    }
};