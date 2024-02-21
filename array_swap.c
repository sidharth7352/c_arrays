// program to swap adjacent array elements

#include<stdio.h>
void main()
{
int a[10],i,ele,t;
printf("enter the elements...\n");
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

printf("before array elements swapping...\n");
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

printf("after array elements swapping...\n");
for(i=0;i<ele;i=i+2)
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}

for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

}




