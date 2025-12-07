func maxProfit(prices []int) int {
    max := prices[len(prices)-1]
    profit := 0
    for i:=len(prices)-2; i>=0 ; i-- {
        if max-prices[i] > profit {
            profit = max-prices[i]
        }
        if prices[i]>max {
            max = prices[i]
        }
    }
    return profit
}
