/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElements(int* nums, int numsSize, int* returnSize) {
    int* ans=malloc(numsSize * sizeof(int));
    *returnSize=numsSize;
    for (int i=0;i<numsSize;i++){
        ans[i]=-1;
        for (int j=1;j<numsSize;j++){
            int k =(i + j)%numsSize;
            if (nums[k]>nums[i]){
                ans[i]=nums[k];
                break;
            }
        }
    }
    return ans;
}