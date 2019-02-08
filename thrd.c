#include <stdio.h>
int main()
{
   char ch[10];
   scanf("%c",ch);
   if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
   {
       printf("vowel");
   }
   else
   {
       printf("consonant");
   }
   return 0;
}
