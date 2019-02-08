#include <stdio.h>

int main()
{   
    int p,q,n;
    scanf("%d %d",&p,&q);
    int i;
    for(n=p+1;n<q;n++)
    {
    for(i=2;i<n/2 ;i++)
    {
        if(n%i==0)
        {
            continue;
            
        }
        else
        {
            printf("%d",i);
        }
    }
    }
        return 0;
}
