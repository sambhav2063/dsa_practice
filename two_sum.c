/*
#include<stdio.h>
int main()
{
    int arr[5];
    int j,target,i;
    printf("enter elements in array");
    for(i=0;i<5;i++)
    {
        scanf("%d",& arr[i]);
    }
    printf("enter target");
    scanf("%d",&target);

    for(i=0;i<5;i++)
    {
    for(j=0+i;j<5;j++)
    {
        if(arr[i] + arr[j] ==target)
        {
        printf("the indexes are %d %d",i,j);
        return 0;
        }
    }
    }
    
printf("no index found");
return 0;

}  
*/
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int* result = (int*)malloc(2 * sizeof(int)); 
    for (int i = 0; i < numsSize; i++)
     {
        for (int j = i + 1; j < numsSize; j++)
         {
            if (nums[i] + nums[j] == target)
             {
                result[0] = i;  
                result[1] = j;   
                *returnSize = 2; 
                return result;
             }
        }
    }
    
    *returnSize = 0; 
    return NULL;
}