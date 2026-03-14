/*Product of Array except self
example input = [1,2,3,4,5] 
index 0 = 2 * 3 * 4* 5 = 120
index 1 = 1 * 3 * 4 * 5 = 60 
*/

#include<stdio.h>
void array_mul(int *);
int main()
{
    int a[5],i,*p;
    p=a;
    printf("Enter the array elements....\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("Array elements are....\n");
    for(i=0;i<5;i++)
    printf("%d ",a[i]);
    printf("\n");
    array_mul(p);
    return 0;
}

void array_mul(int *p)
{
   int i,j, mul;
   for(i=0;i<5;i++)
   {
    for(j=0,mul=1;j<5;j++)
    {
        if(j!=i)
        {
            mul = mul * (*(p+j));
        }
        
    }
    printf("Multiplication result at %d index = %d\n",i,mul);
   }

}