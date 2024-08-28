func isSubsequence(s string, t string) bool {
    var i, j = 0, 0;
    var sLen, tLen = len(s), len(t)
    for i < sLen && j < tLen{
        if s[i] == t[j] {
            i++;
        }
        j++;
    }
    return i == sLen;
}
