class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,currCount=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==1){
                currCount++;
                count=max(count,currCount);
           }
           else{
            currCount=0;
           }
        }
        return count;
    }
};