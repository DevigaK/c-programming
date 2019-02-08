#include <stdio.h>
#include<string.h>

int main()
{
  int n,k,i,sum=0,a[100];
  scanf("%d %d\n",&n,&k);
  for(i=1;i<=n;i++)
  {
      scanf("%d",&a[i]);
  }
  
  for(i=1;i<=k;i++)
  {
      sum=sum+i;
  }
  printf("\n%d",sum);
   return 0;
}
