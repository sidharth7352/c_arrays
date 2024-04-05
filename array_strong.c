//finding strong numbers in array...

#include<stdio.h>
void main()
{
int a[5],ele,c,i,f,fact,sum,temp,b,r;
ele=sizeof(a)/sizeof(a[0]);
printf("enter the array elements....\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
printf("\n");

for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

for(i=0;i<ele;i++)
{
	temp=a[i];
	for(temp,sum=0;temp;temp=temp/10)
	{
	  r=temp%10;
	  for(fact=1,c=1;c<=r;c++)
	  fact=fact*c;
	
	sum=sum+fact;
	}
 if(sum==a[i])
 {
 b++;
 printf("%d ",a[i]);
 }
 }
 printf("\n");
 printf("count=%d\n",b);
 }
