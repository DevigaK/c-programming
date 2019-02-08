#include <stdio.h>

int main()
{   
    int n;
    scanf("%d",&n);
    int i,flag;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
