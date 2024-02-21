//program to swap first half and second half of an array

#include<stdio.h>
void main()
{
int a[10],ele,i,j,t;
ele=sizeof(a)/sizeof(a[0]);
printf("enter the elements...\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

printf("before swapping....\n");
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

printf("after swapping...\n");
for(i=0,j=ele/2;j<ele;i++,j++)
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}


