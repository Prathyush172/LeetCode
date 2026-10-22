/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int *arr=malloc(numsSize*sizeof(int));
    *returnSize=numsSize;
    int prefix=1;
    for(int i=0;i<numsSize;i++)
    {
        arr[i]=prefix;
        prefix=prefix*nums[i];
    }
    int suffix=1;
    for(int j=numsSize-1;j>=0;j--)
    {
        arr[j]=arr[j]*suffix;
        suffix=suffix*nums[j];
    }
    return arr;
}