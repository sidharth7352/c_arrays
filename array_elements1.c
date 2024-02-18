#include<stdio.h>
void main()
{
int a[5];
int i,ele;
ele=sizeof(a)/sizeof(a[0]);
printf("enter the array element..\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
printf("array elements are..\n");
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}

