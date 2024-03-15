//selection sort operation of array elements in ascending order

#include<stdio.h>
void main()
{
int a[5],ele,i,j,t;
ele=sizeof(a)/sizeof(a[0]);
printf("enter the array elements....\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
printf("\n");

for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

for(i=0;i<ele-1;i++)
{
	for(j=i+1;j<ele;j++)
	{
	 if(a[i]>a[j])
	 {
	 t=a[i];
	 a[i]=a[j];
	 a[j]=t;
	 }
        }
}

for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

}       

