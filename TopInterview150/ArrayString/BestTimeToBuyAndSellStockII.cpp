#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    int buy = prices[0];
    int profit = 0;
    bool holding = true;

    for (int i = 0; i < prices.size(); i++) {
        if ((prices[i] < buy) && holding) {
            cout << prices[i] << endl;
            buy = prices[i];
        } else if ((prices[i] > buy) && holding) {
            profit += prices[i] - buy;
            buy = prices[i];
        }
    }
    
    return profit;
}

int main() {
    vector<int> prices({ 7, 1, 5, 3, 6, 4 });
    
    int result = maxProfit(prices);

    cout <<  "Max Profit: " << result << endl;

    return 0;
}