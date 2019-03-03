#include<stdio.h>
int main()
{
    int n,i,k,j,a[100],temp[100],tempy,count=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    k=0;
    if(k<n)
    {
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                temp[k]=a[i];
                k++;
                count=count+1;
            }
        }
    }
    }
    for(k=0;k<n;k++)
    {
        for(j=k+1;j<n;j++)
        {
            if(temp[i]>=temp[j])
            {
                tempy=a[i];
                a[i]=a[j];
                a[j]=tempy;
            }
        }
    }
    for(k=0;k<count;k++)
    {
        printf("%d ",temp[k]);
    }
return 0;
}
