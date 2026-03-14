/*Input array of integers and a target value, find two numbers whose sum equals the target.

You usually return the indices (positions) of those two numbers.*/

#include<stdio.h>
void targetSum(int *);
int main()
{
    int a[5],i,*p;
    p=a;
    printf("Enter the array elements....\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("Array elements are....");
    for(i=0;i<5;i++)
    printf("%d ",a[i]);   
    targetSum(p);
    return 0;
}

void targetSum(int *p)
{
   int i,target,j;
   printf("Enter the target value to get the sum of two digits in the array...\n");
   scanf("%d",&target);
   for(i=0;i<5;i++)
   {
    for(j=i+1;j<5;j++)
    {
      if(*(p+i)+*(p+j)==target)
      {
      printf("Target achieved...\n");
      printf("Index = [%d] position and [%d] position...\n",i,j);
      return;
      }
    }
   }
   printf("Target not achieved...\n");
}