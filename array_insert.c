#include<stdio.h>
void main()
{
 int a[5],ele,i,num,pos,j;
 ele=sizeof(a)/sizeof(a[0]);
 printf("enter the array elements...\n");
 for(i=0;i<ele;i++)
 scanf("%d",&a[i]);
 for(i=0;i<ele;i++)
 printf("%d ",a[i]);
 printf("\n");
 printf("enter the position to insert...\n");
 scanf("%d",&pos);
 printf("enter the number to insert...\n");
 scanf("%d",&num);
 for(i=0;i<ele;i++)
 {
  if(i==pos)
  {
    for(j=ele-1-1;j>=i;j--)
    a[j+1]=a[j];
    a[pos]=num;
  }
 }
 printf("array when elements inserted...\n");
 for(i=0;i<ele;i++)
 printf("%d ",a[i]);
 printf("\n");
 }
