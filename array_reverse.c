#include<stdio.h>
void main()
{
int a[10],ele,i,j,t;
printf("enter the array elements...\n");
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

printf("array elements are...\n");
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

printf("array elements reversing...\n");
for(i=0,j=ele-1;i<j;i++,j--)
{
t=a[i];
a[i]=a[j];
a[j]=t;
}

for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
