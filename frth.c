#include <stdio.h>
#include<string.h>
int main()
{
   
   char n[10];
   scanf("%c",n);
   if('a'<=n<='z')
   {
       printf("alphabet");
   }
   else if('A'<=n<='Z')
   {
    printf("alphabet");
   }
   else
   {
    printf("invalid");
   }
    return 0;
}
