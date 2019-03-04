#include<stdio.h>
int main()
{
    int n,i,j,sum=0,a[100],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum=a[i]+a[j];
            for(k=0;k<n;k++)
            {
                if(sum==a[k])
                {
                    printf("%d %d %d",a[i],a[j],a[k]);
                     printf("\n");
                }
            }
           
            sum=0;
            
        }
    }
    return 0;
}
