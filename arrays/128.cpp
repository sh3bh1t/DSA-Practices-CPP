class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();  
        if(n==0) return 0;
        int curr_largest = INT_MIN, longest = 1;
        int count = 1;  
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1] + 1) {
                count++;
                curr_largest=nums[i];
            } if(nums[i]!=curr_largest) {
                count = 1;  
                curr_largest=nums[i];
            }
        longest = max(longest, count);
        }
        return longest;
    }
};