include <stdio.h>

int main()
{   
    int n,b,sum=0,a;
    scanf("%d",&n);
    int t=n;
    while(t!=0)
    {
        a=t%10;
        b=a*a*a;
        sum=sum+b;
        t=t/10;
    }
  if(sum==n)
   {
       printf("yes");
   }
   else
   {
       printf("no");
   }
    return 0;
}
