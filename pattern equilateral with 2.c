
#include <stdio.h>
int main()
{
    int i,j,n,num=9,space=0,k=1,count=0;
    if(num%2==0)
    {  n=num/2;
    }
    else
    {  n=num/2;
        n=n+1;
    }
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf(" ");
        }
        space=k;
        while(space--)
        {
            printf("*");
        }
        k=k+2;
        printf("\n");
    }
    return 0;
}
