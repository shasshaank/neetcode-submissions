class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int small = INT_MAX;
        int large = INT_MIN;
        for(int i=0;i<n;i++){
            small = min(small,prices[i]);
            large = max(large,prices[i]-small);
        }

        return large;
    }
};
