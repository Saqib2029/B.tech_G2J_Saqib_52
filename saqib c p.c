# include <stdio.h>

int main()
{
   int age;
   printf("enter age =");
   scanf("%d",&age);
   if(age>=18)
   {
      printf("person is elegible");
   }
   else
   {
      printf("person is not eligible");

   }
   return 0;
}