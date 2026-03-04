/*
WAP in C to find sum of 1st digit of all array 
      i/p:  int a[5]={123,23,89,3425,721};
     o/p:      1+2+8+3+7 ---->  21  */

#include<stdio.h>
int main()
{
    int a[5],i,*p,num,sum=0;
    printf("Enter the array elements...\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    p=a;

    printf("Array elements are..\n");
    for(i=0;i<5;i++)
    printf("%d ",*(p+i));
    printf("\n");

    for(i=0;i<5;i++)
    {
        num=a[i];
        for(num;num>=10;num)
        num=num/10;

        sum=sum+num;
        
    }
    printf("Sum of first digits of array elements = %d\n",sum);

    return 0;




}     