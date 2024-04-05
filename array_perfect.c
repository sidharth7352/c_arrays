//finding perfect numbers in an array and counting it

#include<stdio.h>
void main()
{
int a[6],ele,c,temp,sum,i,j;
ele=sizeof(a)/sizeof(a[0]);
printf("enter the array elements...\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
printf("array elements are...\n");
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

for(i=0,c=0;i<ele;i++)
{
	temp=a[i];
	for(j=1,sum=0,temp;j<temp;j++)
	{
          if(temp%j==0)
	  sum=sum+j;
        }
	if(sum==a[i])
	{
	c++;
	printf("%d ",a[i]);
	}
}
printf("\n");
printf("count=%d\n",c);
}
	
