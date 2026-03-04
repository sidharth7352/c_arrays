/*
WAP in C to sort 1st 4 ele of array in decending .
     i/p:  int a[7]={5,3,1,2,1,9,6};
    o/p:     5  3  2  1  1  9  6  
    */

#include<stdio.h>
void main()
{
    int a[7],i,j,*p,temp;
    printf("Enter the array elements....\n");
    for(i=0;i<7;i++)
    scanf("%d",&a[i]);
    p=a;

    //sort 1st 4 ele of array in decending order

    for(i=0;i<3;i++)
    {
        for(j=0;j<3-i;j++)
        {
          if(*(p+j)< *(p+j+1))
          {
                temp= *(p+j);
                *(p+j)= *(p+j+1);
                *(p+j+1)= temp;
          }
        }

    }
    printf("sorted 1st 4 ele of array in decending order...\n");
    for(i=0;i<7;i++)
    printf("%d ",*p++);


}