func numSubarrayProductLessThanK(nums []int, k int) int {
    if k <= 1 {
        return 0
    } 

    var ans, left, curr = 0,0,1
    for right :=0; right < len(nums); right++{
        curr = curr * nums[right]
        for curr >= k {
            curr = curr / nums[left]
            left++
        }
        ans = ans + right - left + 1
    }

    return ans
}
