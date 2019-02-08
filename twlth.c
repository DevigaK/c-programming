#include <stdio.h>
#include<string.h>

int main()
{
  int n,t,rev;  
  scanf("%d",&n);
  t=n;
  while(t!=0)
  {
      rev=rev*10;
      rev=rev+(rev%10);
  }
  if(rev==n)
  {     
      printf("YES");
  }
  else
  {
      printf("NO");
  }
  
    return 0;
}
