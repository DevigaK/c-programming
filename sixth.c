#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   if(n>=1000)
   {
   if((n%4==0)||(n%400==100)&&(n%100!=0))
   {
       printf("leap year\n");
   }
   
   else
   {
       printf("not leap year\n");
   }
   }
   return 0;
}
