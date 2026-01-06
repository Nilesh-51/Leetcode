func isAnagram(s string, t string) bool {
    sLen := len(s)
    tLen := len(t)
    if sLen!=tLen {
        return false
    }
    mp := make(map[rune]int)
    for _, r := range s {
        mp[r]++
    }//a=2,c=2
    for _, r := range t {
        _, ok := mp[r]
        if ok {
            mp[r]--
        } else{
            return false
        }
        if mp[r]==0 {
            delete(mp,r)
        }
    }

    return true
}


