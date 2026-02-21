type RecentCounter struct {
    recents []int
    start int
}


func Constructor() RecentCounter {
    return RecentCounter{}
}


func (this *RecentCounter) Ping(t int) int {
    this.recents = append(this.recents,t)
    n:= len(this.recents)
    for i:=this.start; i<n; i++ {
        if(this.recents[i]>=t-3000){
            this.start = i
            break
        }
    }
    return n-this.start
}


/**
 * Your RecentCounter object will be instantiated and called as such:
 * obj := Constructor();
 * param_1 := obj.Ping(t);
 */
