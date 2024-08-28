func isPalindrome(s string) bool {
    var left, right = 0, len(s) - 1
    for left < right{
        if !isAlphaNumeric(s[left]) {
            left++
            continue
        }
        if !isAlphaNumeric(s[right]) {
            right--
            continue   
        }
     if toLower(s[left]) != toLower(s[right]){
            return false
    }
        left++
        right--
    }

   return true
}
func toLower(c byte) byte {
    if c >= 65 && c <= 90 {
        return c + 32
    }
    return c
}
func isAlphaNumeric(c byte) bool {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')
}
