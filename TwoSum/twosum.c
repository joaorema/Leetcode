#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int i = 0;  
    int j = i + 1;

    int *result = (int *)malloc(sizeof(int) * 2);
    *returnSize = 2;

    while(i++ < numsSize - 1)
    {
        while(j++ < numsSize - 1)
        {
            if(nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    result[0] = 0;
    result[1] = 1;
    return result;

}

/*int main()
{
    int target = 9;
    int numsSize = 4;
    int array[] = {2,7,11,15};
    int returnSize;


    int *result = twoSum(array, numsSize, target, &returnSize);
    printf("%i , %i\n", result[0], result[1]);
    
}*/

/*int main()
{
    int target = 6;
    int numsSize = 3;
    int array[] = {3,2,4};
    int returnSize;

    int *result = twoSum(array, numsSize, target, &returnSize);
    printf("%i , %i\n", result[0], result[1]);

}*/

/*int main()
{
    int target = 6;
    int numsSize = 2;
    int array[] = {3,3};
    int returnSize;

    int *result = twoSum(array, numsSize, target, &returnSize);
    printf("%i , %i\n", result[0], result[1]);

}*/