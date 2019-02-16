#include <stdio.h>
#include<string.h>
int main()
{
    int n,i,count=0;
    
    char str[1000],str1[10000];
    scanf("%s",str);
    scanf("%s",str1);
    n=strlen(str);
    for(i=0;i<=n;i++)
    {
        if(str[i]!=str1[i])
        {
            count++;
        }
    }
    if(count==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    

    return 0;
}
