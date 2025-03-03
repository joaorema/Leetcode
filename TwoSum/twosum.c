#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
   int i = 0;
   int j = i + 1;

   int* result = (int*)malloc(sizeof(int) * 2); 
   *returnSize = 2;

    while(i < numsSize)
    {   
        j = i + 1;
        while(j < numsSize)
        {
            if(nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                return result;
            }
            j++;
        }
        i++;
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

int main()
{
    int target = 14;
    int numsSize = 7;
    int array[] = {3,2,3,9,3,5,7};
    int returnSize;

    int *result = twoSum(array, numsSize, target, &returnSize);
    printf("%i , %i\n", result[0], result[1]);

}

/*int main()
{
    int target = 6;
    int numsSize = 2;
    int array[] = {3,3};
    int returnSize;

    int *result = twoSum(array, numsSize, target, &returnSize);
    printf("%i , %i\n", result[0], result[1]);

}*/