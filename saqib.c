// WAP to read n elemnts and print these element using 1d array
#include<stdio.h>
int main()
{
    int a[50],n,i;
    printf("enter no of element you need to array");
    scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("enter the values of element= a[%d]",i);
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
return 0;
}
