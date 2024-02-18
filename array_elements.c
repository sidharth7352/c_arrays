#include<stdio.h>
void main()
{
int a[5]={10,20,30,40,50};
int ele,i;
printf("size of array=%ld\n",sizeof(a));
printf("size of array element =%ld\n",sizeof(a[0]));
ele=sizeof(a)/sizeof(a[0]);
printf("array elements are..\n");
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
printf("array elements reversing...\n");
for(i=ele-1;i>=0;i--)
printf("%d ",a[i]);


}

