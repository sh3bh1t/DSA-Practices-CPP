// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int n=nums.size();
//         unordered_map<long long,int> hash;
//         for(int i=0;i<n;i++){
//             hash[nums[i]]++;
//         }
//         for(auto it:hash){
//             if(it.second==1){
//                 return it.first;
//             }
//         }
//         return -1;
//     }
// };

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr=0;
        for(int i=0;i<nums.size();i++){
            xorr=xorr^nums[i];
        }
        return xorr;
    }
};