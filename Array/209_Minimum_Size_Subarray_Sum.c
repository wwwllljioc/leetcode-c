int minSubArrayLen(int target, int* nums, int numsSize) {
    int left;
    int right;
    int min=INT_MAX;
    left = right = 0;
    int sum = 0;
    while(right < numsSize){        //控制右边界扩张
        sum += nums[right];  
        right++;
        while(sum >= target){       //控制左边界收缩
            if(right - left < min){
                min = right - left;
            }
            sum -= nums[left];
            left++;
        }
    }
    return min==INT_MAX?0:min;
}
