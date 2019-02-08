#include <stdio.h>

int main()
{
   int x;
   scanf("%d",&x);
   if(x%2==0)
   {
       printf("even\n");
       
   }
   else if(x%2!=0)
   {
       printf("odd\n");
   }
   else
   {
       printf("invalid\n");
   }

    return 0;
}
