class Solution {
  public:
    int maxPeopleDefeated(int p) {
        // Code Here
        int count=0;
        int sum=0;
        int i=1;
        while(sum<p){
            sum+=i*i;
            i++;
            if(sum<=p)
            count++;
        }
        return count;
    }
};
