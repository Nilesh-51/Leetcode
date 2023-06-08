class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min=0,profit=0;
        for(int i=0;i<n;i++){
            if(prices[i]<prices[min])
            min=i;
            if(profit<prices[i]-prices[min])
            profit=prices[i]-prices[min];
        }
        return profit;
    }
};
