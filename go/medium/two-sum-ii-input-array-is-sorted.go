func twoSum(numbers []int, target int) []int {
	var left, right = 0, len(numbers) - 1
	ans := []int{}
	for left < right {
		if numbers[left]+numbers[right] == target {
			ans = append(ans, left + 1)
			ans = append(ans, right + 1)
			return ans
		}
		if numbers[left] + numbers[right] < target {
			left++
		} else {
			right--
		}
	}

	return nil
}
