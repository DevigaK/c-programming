#include <stdio.h>
int main()
{
    int n,a,b,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        b=a*a;
        sum=sum+b;
        n=n/10;
    }
    printf("%d",sum);
    
   
    return 0;
}
