func maxProfit(prices []int) int {
    profit := 0
    currMax :=0
    for i:=len(prices)-1; i>=0; i-- {
        if profit < currMax - prices[i] {
            profit = currMax - prices[i]
        }
        if prices[i] > currMax {
            currMax = prices[i]
        }
    }
    return profit
}
