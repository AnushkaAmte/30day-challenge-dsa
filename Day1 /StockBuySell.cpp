//TC:O(N)
//SC:O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
     int minprice = INT32_MAX;
int prof=0;

for(int i=0;i<n;i++){
    minprice = min(minprice,prices[i]);
    prof = max(prof,prices[i]-minprice);
}

return prof;
    }
};
