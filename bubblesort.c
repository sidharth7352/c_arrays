//bubble sorting of array elements in ascending order

#include<stdio.h>
void main()
{
int a[5],ele,i,j,t;
ele=sizeof(a)/sizeof(a[0]);
printf("enter the array elements....\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

printf("array elements are....\n");
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

for(i=0;i<ele-1;i++)
{
	for(j=0;j<ele-1-i;j++)
	{
	  if(a[j]>a[j+1])         //if(a[j]<a[j+1]) it will be in descending order
	  {
	    t=a[j];
	    a[j]=a[j+1];
	    a[j+1]=t;
	  }
	}
}

printf("bubble sorted elements in ascending order....\n");
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
