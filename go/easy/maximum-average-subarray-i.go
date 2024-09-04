func findMaxAverage(nums []int, k int) float64 {
    var ans, curr float64
    
    for i := 0; i < k; i++{
        curr += float64(nums[i])
    }
    curr = curr
    ans = curr 
    
    for i := k; i < len(nums); i++{
        curr += float64(nums[i]  - nums[i - k])
        ans = math.Max(curr, ans) 

    }
    return ans/float64(k);
}
