type Key [26]byte

func createKey(str string) (key Key) {
    for _, s := range str {
        key[s-'a']++
    }
    return
}
func groupAnagrams(strs []string) [][]string {
    groups := make(map[Key][]string)

    for _, v := range strs {
        key := createKey(v)
        groups[key] = append(groups[key],v)
    }

    result := make([][]string,0)

    for _,v := range groups {
        result = append(result, v)
    }
    return result
}
