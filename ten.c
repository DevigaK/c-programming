#include <stdio.h>
#include<string.h>

int main()
{
  int n,a,count=0;
  scanf("%d ",&n);
  while(n>9)
  {
      a=n%10;n=n/10;
      count=count+1;
  }
  count=count+1;
  printf("%d",count);
   return 0;
}
