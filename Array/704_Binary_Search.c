int search(int* nums, int numsSize, int target) {
    int left,right;int mid;
    left = 0; right = numsSize - 1;
    while(left <= right){
        mid=(left + right)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid] > target){
            right = mid - 1;
            continue;
        }
        else if(nums[mid] < target){
            left = mid + 1;
            continue;
        }
    }
    return -1;
}