func productExceptSelf(nums []int) []int {
    n := len(nums)
    right := 1
    products := make([]int, n)
    for i:=0; i<n; i++ {
        products[i] = 1
    }

    for i:=1; i<n; i++ {
        products[i] = products[i-1]*nums[i-1]
    }

    for i:=n-2; i>=0; i-- {
        right = right*nums[i+1]
        products[i] = right *products[i]
    }

    return products
}
