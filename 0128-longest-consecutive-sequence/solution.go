func longestConsecutive(nums []int) int {
    set := make(map[int]bool)
    for _, n := range nums {
        set[n] = true
    }

    count := 0
    for n := range set {
        // Only start counting if n is the START of a sequence
        // i.e., n-1 doesn't exist
        if !set[n-1] {
            current := n
            streak := 1
            for set[current+1] {
                current++
                streak++
            }
            if streak > count {
                count = streak
            }
        }
    }
    return count
}
