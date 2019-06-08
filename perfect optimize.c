#include<stdio.h>
int main()
{
    long int t,n,sum,i;
    scanf("%ld",&t);
    while(t--)
    {
        sum=0;
       scanf("%ld",&n);
       for(i=2;i<=sqrt(n);i++)
       {
           if (n%i==0)
           {
               if(i==(n/i))
               {
                   sum=sum+i;
               }
               else
               {
                   sum=sum+i+(n/i);
               }
           }
          
       }
       sum=sum+1;
       if(sum==n)
       printf("1\n");
       else
       printf("0\n");
    }
    return 0;
}
