/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int left = 0;
    * returnSize =numsSize;
    int* ans = (int*)malloc(sizeof(int)*numsSize);
    int right = numsSize - 1;
    int k = numsSize - 1;
    while(left <= right){
        if(nums[left]*nums[left] > nums[right]*nums[right]){
            ans[k]=nums[left]*nums[left];
            k--;
            left++;
        }
        else{
            ans[k]=nums[right]*nums[right];
            right--;
            k--;
        }
    }
    return ans;
}
