class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyprice=prices[0];
        int n=prices.size();
        int maxprofit=0,currprofit=0;
        for(int i=1;i<n;i++){
            currprofit=prices[i]-buyprice;
            maxprofit=max(maxprofit,currprofit);
            buyprice=min(buyprice,prices[i]);
        }
        return maxprofit;
    }
};