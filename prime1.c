#include <stdio.h>
int main()
{
   int i, l,r, p = 0,k,count=0;
      scanf("%d %d", &l,&r);
      k=l;
      while(k<=r)
      {
          p=0;
   for(i=1; i<=k; i++)
   {
      if(k%i==0)
      {
         p++;
      }
   }
   if(p==2)
   {
      count=count+1;
   }
   k++;
      
      }
      
      printf("%d",count);
      return 0;
}
