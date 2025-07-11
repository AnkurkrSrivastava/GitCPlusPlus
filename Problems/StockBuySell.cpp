// To get profit of bought and sold prices

#include <iostream>
#include <vector>
using namespace std;

int StockBuySell(vector<int> prices){
    int MinPriceDay = 0;
    int MaxProfit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < prices[MinPriceDay])
        {
            MinPriceDay = i;
        }else{
            int profit = prices[i] - prices[MinPriceDay];
            MaxProfit = max(profit, MaxProfit);
        }
        
    }
    return MaxProfit;
    
}

int main(){
    vector<int> vec = {7,0,5,3,6,4};
    cout << "Maximum Profit = " << StockBuySell(vec) << endl;
    return 0;
}