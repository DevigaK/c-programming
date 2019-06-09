#include<stdio.h>
#include<string.h>
int main()
{
    int n,t,i,flag=0,count;
    scanf("%d",&t);
    char str[10000];
    while(t--)
    {
        scanf("%s",str);
        n=strlen(str);
        count=0;
        flag=0;
        for(i=0;i<n;i++)
        {
            if(str[i]==str[n-1-i])
                {
                    count=count+1;
                }
                else
                {
                    flag=1;
                    break;
                }
        }
        if(flag==1)
        printf("NO\n");
        else
        { if(count==n)
        printf("YES\n");
    }}
    
    return 0;
}
