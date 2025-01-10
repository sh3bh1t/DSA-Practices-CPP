class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n=nums1.size();
        int m=nums2.size();
        int i=0;
        int j=0;
        set<int> temp;
        while(i<n && j<m){
            if(nums1[i] < nums2[j]){
                i++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else{
                temp.insert(nums1[i]);
                i++;
                j++;
            }
        }
        vector<int> ans;
        for(auto it : temp){
            ans.push_back(it);
        }
        return ans;
    }
};