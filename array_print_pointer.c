/*WAP in C to print array using int pointer.
   i/p:  int a[5]={11,22,33,44,55}, *p=a;
   o/p:     11  22   33  44  55 */

#include<stdio.h>
void main()
{
   int i,a[5],*p;
   p=a;
   printf("Enter the array elements..\n");
   for(i=0;i<5;i++)
      scanf("%d",&a[i]);
   printf("Array elements are...\n");
   for(i=0;i<5;i++)
   printf("%d ",*p++);
}