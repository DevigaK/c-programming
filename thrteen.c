#include <stdio.h>
#include<string.h>

int main()
{
  int n,q,i,a[10000];
  
  scanf("%d %d",&n,&q);
  for(i=n+1;i<q;i++)
  {
      if(i%2!=0)
      {
          printf("%d ",i);
      }
  }
     return 0;
}
