int removeElement(int* nums, int numsSize, int val) {
    int i = 0;
    int j = 0;
    int count = 0;
    while(j <= numsSize - 1){
        if(nums[j]==val){
            j++;
            continue;
        }
        else{
            nums[i++] = nums[j++];
        }
    }
    return i;
}