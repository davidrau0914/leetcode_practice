/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* twoSum(int* nums, int numsSize, int target) 
{
    
    int i=0, j=0;
    static int result[2] = {0, 0};
    
    for(i=0; i<=numsSize; i++)
    {
        for(j=numsSize - 1; j>i; j--)
        {
            //if (target == nums[i] + nums[j])
            if (nums[j] == target - nums[i])
            {
                result[0] = i;
                result[1] = j;
                
                return result;
            }
        }
    }
    
    return 0;
    
}
