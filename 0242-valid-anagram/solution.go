func isAnagram(s string, t string) bool {
    if len(s) != len(t) {
        return false
    }
    mp := make(map[rune]int)
    for _, r := range s {
        mp[r]++
    }
    for _, r := range t {
        if _, ok := mp[r]; ok && mp[r] != 0  {
                mp[r]--
        } else {
            return false
        }
    }

    return true
}
