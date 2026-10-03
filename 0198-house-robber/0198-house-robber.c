#include <math.h>

int rob(int* nums, int numsSize) {
    if (numsSize == 0) return 0;
    if (numsSize == 1) return nums[0];
    int prev2 = 0;       
    int prev1 = nums[0]; 
    for (int i = 1; i < numsSize; i++) {
        int curr;
        if(nums[i]+prev2 > prev1)
        {
            curr=nums[i]+prev2;
        }
        else
        {
            curr=prev1;
        }
        prev2=prev1;
        prev1=curr;
    }
    return prev1;
}