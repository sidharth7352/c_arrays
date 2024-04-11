// program to delete elements in an array
#include<stdio.h>
void main()
{
int a[6],ele,pos,i,j;
ele=sizeof(a)/sizeof(a[0]);
printf("enter the array elements....\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
printf("array elements are....\n");
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
printf("enter the position to delete...\n");
scanf("%d",&pos);
for(i=0;i<ele;i++)

	if(i==pos)
	{
	for(j=i;j<ele-1;j++)
	a[j]=a[j+1];
	}
for(i=0;i<ele-1;i++)
printf("%d ",a[i]);
printf("\n");
}

