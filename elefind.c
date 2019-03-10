#include<stdio.h>
#include<math.h>
int main()
{
    int m,n;
    scanf("%d %d\n",&m,&n);
    int i,j,a[100],b[100],count=0;
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<m;i++)
        {
            if(b[j]==a[i])
            {
                count=count+1;
            }
        }
    }
    if(count==n)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
}
