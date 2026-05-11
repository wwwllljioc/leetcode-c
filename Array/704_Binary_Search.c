int search(int* nums, int numsSize, int target) {
    int left,right;int mid;
    left = 0; right = numsSize - 1;
    while(left <= right){           //等于为了解决[5]一种元素情况
        mid=(left + right)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid] > target){
            right = mid - 1;        //让区间缩小，以防止进入死循环如[5],或者[2,4]这种类型
            continue;
        }
        else if(nums[mid] < target){
            left = mid + 1;
            continue;
        }
    }
    return -1;
}
