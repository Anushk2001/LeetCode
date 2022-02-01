// Time Complexity: O(Length)
// Space Complexity: O(1)    
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int buying_cost = prices[0];
        int Len = prices.size();
        for(int day=1;day<Len;day++)
        {
            // sell the product 
            int selling_cost = prices[day];
            int profit = selling_cost-buying_cost;
            res = max(res,profit);
            buying_cost = min(buying_cost,prices[day]);
        }
        return res;
    }
};