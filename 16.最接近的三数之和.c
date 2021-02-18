/*
    1.先排序;
    2.双指针;
*/
int compare(const void *a,const void *b){
    return *(int*)a - *(int*)b;
}

int threeSumClosest(int* nums, int numsSize, int target){

    //0.先排序;
    qsort(nums,numsSize,sizeof(int),compare);

    //1.双指针遍历数组;
    int cur = 0,left,right;
    int sum,differ,closesum,closediffer = 3000;
    while(cur < numsSize-2){
        left = cur+1,right = numsSize-1;
        while(left < right){
            sum = nums[cur] + nums[left] + nums[right];
            if(sum == target){
                return sum;
            }
            else if(sum < target){
                while(left < right-1 && nums[left] == nums[left+1]) left++;
                left++;      
            }
            else if(sum > target){
                while(right > left+1 && nums[right] == nums[right-1]) right--;
                right--;
            }
            differ = target-sum>0?target-sum:sum-target;
            if(differ < closediffer){
                closediffer = differ;
                closesum = sum;
            }
        }
        while(nums < numsSize-2 && nums[cur] == nums[cur+1]) cur++;
        cur++; 
    }
    return closesum;
}