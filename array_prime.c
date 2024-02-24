#include<stdio.h>
void main()
{
int a[10],i,j,r,ele,c;
ele=sizeof(a)/sizeof(a[0]);
printf("enter the array elements...\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

printf("prime numbers are....\n");

for(i=0,r=0;i<ele;i++)
{
	for(j=1,c=0;j<=a[i];j++)
 {
 if(a[i]%j==0)
 c++;
 }
 if(c==2)
 {
 printf("%d ",a[i]);
 r++;
 }
}
printf("\n");
printf("number of prime numbers = %d\n",r);
}



