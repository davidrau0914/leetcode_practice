double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) 
{
    
    int flag1 = 0;
    int flag2 = 0;
    int flag3 = 0;
    
    int *nums3 = (int *)malloc(sizeof(int )*(nums1Size + nums2Size));

// Merge "num1" and "num2" to num3 by order     
    while(flag1 < nums1Size && flag2 < nums2Size)
    {
        if(nums1[flag1] <= nums2[flag2])
            nums3[flag3++] = nums1[flag1++];
        else
            nums3[flag3++] = nums2[flag2++];
    }
    
    while(flag2 < nums2Size)
    {
        nums3[flag3++] = nums2[flag2++];
    }
    
    
    while(flag1 < nums1Size)
    {
        nums3[flag3++] = nums1[flag1++];
    }
//End
    
//Find out the median_index bases on the numbers of num3 (nums1Size + nums2Size)    
    if((nums1Size + nums2Size) % 2 == 0)
    {
        int median_index = (nums1Size + nums2Size)/2  - 1;
        return (nums3[median_index] +nums3[median_index+1] )/2.0;
    }
    else
    {
        int median_index = (nums1Size + nums2Size)/2 ;
        return nums3[median_index];
    }
//End    
    
}
