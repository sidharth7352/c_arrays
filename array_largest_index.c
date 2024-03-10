//program to print largest and smallest array elements and their index values...

#include<stdio.h>
void main()
{
int a[5],ele,i,j,large,small,index;
ele=sizeof(a)/sizeof(a[0]);
printf("enter the array elements....\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

printf("array elements are....\n");
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

large=a[0];
small=a[0];

for(i=0,index=0;i<ele;i++)
if(large<a[i])
{
large=a[i];
index=i;
}

printf("largest=%d and index value=a[%d]\n",large,index);

for(i=0,index=0;i<ele;i++)
if(small>a[i])
{
small=a[i];
index=i;
}

printf("smallest=%d and index values=a[%d]\n",small,index);

}
