class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int positive=0,negative=1;
        vector<int> temp(n);
        for(auto it:nums){
            if(it<0){
                temp[negative]=it;
                negative +=2;
            }
            else{
                temp[positive]=it;
                positive+=2;
            }
        }
        return temp;
    }
};