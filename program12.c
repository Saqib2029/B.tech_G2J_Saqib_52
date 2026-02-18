// program 12 - switch case

# include <stdio.h>
int main()
{
    int a,b;
    char op;
    printf("enter two operants");
    scanf("%d%d",&a,&b);
    printf("enter an operator(+,-,*,/)");
    scanf("  %c",&op);

    switch(op)
   {
    case'+' :
    printf("addition=  &d",a+b );
    break;

    case'-' :
    printf("subtraction= %d",a-b);
    break;

    case'*':
    printf("multiply= %d",a*b);
    break;

    case'/':
    if(b==0)
    printf("division not perform");
    else
    printf("division= %f",(float)a/b);
    break;
    
    default:
    printf("incorrect operator");

}
return 0;
}