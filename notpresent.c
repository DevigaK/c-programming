#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,a[100],count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==a[i])
        {
            printf("%d ",a[i]);
        }
        else
        {
            count=count+1;
        }
    }
    if(count==n)
    {
        printf("-1");
    }
    return 0;
}
