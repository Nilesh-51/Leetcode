func maxArea(height []int) int {
    area := 0
    i:=0
    j:=len(height)-1
    for i<j {
        minHeight:= min(height[i],height[j])
        if area < minHeight*(j-i) {
            area = minHeight*(j-i)
        }
        if height[i]<height[j] {
            i++
        } else {
            j--
        }
    }
    return area
}
