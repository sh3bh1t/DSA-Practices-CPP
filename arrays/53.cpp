class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN,currsum=0;
        for(auto it:nums){
            currsum+=it;
            maxsum=max(maxsum,currsum);
            if(currsum<0){
                currsum=0;
            }
        }
        return maxsum;
    }
};