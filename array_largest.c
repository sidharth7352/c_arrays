#include<stdio.h>
void main()
{
int a[10],ele,i,largest;
ele=sizeof(a)/sizeof(a[0]);
printf("enter the array elements...\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
//printf("array  elements are...\n");
//for(i=0;i<ele;i++);
//printf("%d ",a[i]);
//printf("\n");

largest=a[0];

for(i=1;i<ele;i++)
{
if(a[i]>largest)
largest=a[i];
}
printf("largest number in array is %d\n",largest);
}
