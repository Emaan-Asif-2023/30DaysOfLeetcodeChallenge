class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int minPrice = INT_MAX;
        int finalProfit = 0;
        
        for (int price : prices) {
            minPrice = min(minPrice, price);
            int profit = price - minPrice;
            finalProfit = max(finalProfit, profit);
        }
        
        return finalProfit;
    }
    
};