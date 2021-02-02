int removeElement(int* nums, int numsSize, int val){
    int left = 0, right = numsSize - 1;
    while (left <= right) {
        /* 找到数组尾部第一个目标值 */
        if (nums[right] == val) {
            right--;
            continue;
        }
        /* 开始替换 */
        if (nums[left] == val) {
            int tmp = nums[left];
            nums[left] = nums[right];
            nums[right] = tmp;
            right--;
            left++;          
        } else {
            left++;
        }
    }
    return left;
}
