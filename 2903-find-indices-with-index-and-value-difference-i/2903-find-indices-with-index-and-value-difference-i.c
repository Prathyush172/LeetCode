/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findIndices(int* nums, int numsSize, int indexDifference, int valueDifference, int* returnSize) {
    int *arr = malloc(2*sizeof(int));
    
    for(int i=0;i<numsSize;i++)
    {
        for(int j=0;j<numsSize;j++)
        {
            if(abs(i-j)>=indexDifference && abs(nums[i]-nums[j])>=valueDifference)
            {
                arr[0]=i;
                arr[1]=j;
                *returnSize=2;
                return arr;
            }
        }
    }
    arr[0]=-1;
    arr[1]=-1;
    *returnSize=2;
    return arr;

}