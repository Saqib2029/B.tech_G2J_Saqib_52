// program 13 to check the number is =,-,0
#include<stdio.h>
int main()
{

    int n;
    printf("enter a number toh check");
    scanf("%d",&n);
    
    if(n>0)
    {
    printf("number is positive");
    }
    else if(n<0)
    {
    printf("number is negative");
    }
    else
    {
    printf("number is zero");
        
    }
    
    
    return 0;
}