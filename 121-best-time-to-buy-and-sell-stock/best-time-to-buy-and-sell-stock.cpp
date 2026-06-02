class Solution {
public:
    int maxProfit(vector<int>& nums) {
    int n = nums.size();
    int buyingprize = nums[0];   
    int sellingprize = nums[0];
    int profit = 0;
    for(int i=0;i<n;i++){
        buyingprize = min(buyingprize,nums[i]);
        sellingprize = nums[i];
        profit = max(profit,sellingprize-buyingprize);
    }
    return profit;
    }
};