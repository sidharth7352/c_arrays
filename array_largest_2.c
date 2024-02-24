#include<stdio.h>
void main()
{
int a[6],ele,i,l,sl;
ele=sizeof(a)/sizeof(a[0]);
printf("enter the array elements...\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

printf("array elements are...\n");
for(i=0;i<ele;i++)
printf("%d ",a[i]);

if(a[0]>a[1])
{
l=a[0];
sl=a[1];
}
else if(a[1]>a[0])
{
l=a[1];
sl=a[0];
}
for(i=2;i<ele;i++)
{
if(a[i]>l)
{
sl=l;
l=a[i];
}
else if(a[i]>sl && a[i]!=l)
sl=a[i];
}
printf("largest = %d\n",l);
printf("second largest = %d\n",sl);
}

