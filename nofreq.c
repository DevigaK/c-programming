#include<stdio.h>
int main()
{
    int n,a[100],i,temp[100],j,k,count;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count=count+1;
                temp[i]=count;
            }
        }
    }
    for(i=0;i<n;i++)
    {
      if(temp[i]==0)
      {
          printf("%d",a[i]);
      }
        
        
    }
return 0;
    
}
