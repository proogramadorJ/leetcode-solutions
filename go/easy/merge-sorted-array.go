func merge(nums1 []int, m int, nums2 []int, n int)  {

   var left, right = 0, 0
    arr := make([]int, m + n)

    i := 0
    for left < m && right < n {
        if nums1[left] < nums2[right] {
            arr[i] = nums1[left]
            left++
        }else{
            arr[i] = nums2[right]
            right++
        }
        i++
    } 

    for left < m {
        arr[i] = nums1[left]
        i++
        left++
    }
    for right < n {
        arr[i] = nums2[right]
        i++
        right++
    }

    for j :=0; j < m + n; j++ {
        nums1[j] = arr[j]
    }
}
