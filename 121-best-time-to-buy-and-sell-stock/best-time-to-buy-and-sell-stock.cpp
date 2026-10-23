class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int n = prices.size();
        int maxProfit = 0;
        for(int i = 0; i<n; i++){
            long long currProfit = prices[i] - minPrice;
            if(currProfit > maxProfit){
                maxProfit = currProfit;
            }
            if(prices[i] < minPrice){
                minPrice = prices[i];
            }
        }
        return maxProfit;
    }
}; 