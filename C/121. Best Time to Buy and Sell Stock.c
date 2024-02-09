int maxProfit(int* prices, int pricesSize) {
    int min = prices[0]; // Minimum value
    int profit = 0;      // Total profit
    int i_profit = 0;    // Individual day profit

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < min)
            min = prices[i];
            
        i_profit = prices[i] - min;

        if (profit < i_profit)
            profit = i_profit;
    }
    return profit;
}
