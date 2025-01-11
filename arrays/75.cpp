class Solution {
public:
    void sortColors(vector<int>& nums) {
        multiset<int> temp;
        for(auto it:nums){
            temp.insert(it);
        }
        nums.clear();
        for(auto it:temp){
            nums.push_back(it);
        }
    }
};