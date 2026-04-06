class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp = 0;
        int minp = INT_MAX;
        for(int i = 0; i < prices.size(); i++){
            int pr = 0;
            if(prices[i] < minp){
                minp = prices[i];
            }
            pr = prices[i] - minp;
            mp = max(pr, mp);
        }
        return mp;
    }
};
