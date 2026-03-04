/*
WAP in C to find sum of all array elements.
         i/p:  int a[5]={10,20,30,40,50};
        o/p:     150     */

#include<stdio.h>
int main()
{
    int a[5],i,*p,sum=0;
    p=a;
    printf("Enter the array elements...\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);

    printf("Array Elements are....\n");
    for(i=0;i<5;i++)
    printf("%d ",*(p+i));
    printf("\n");


    for(i=0;i<5;i++)
    {
        sum=sum+ *(p+i);
    }
    
    printf("Sum of array Element = %d\n",sum);

}