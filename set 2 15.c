
#include <stdio.h>
#include<string.h>
int main()
{
    int n,i,j,count=0,b[100],max;
    char str[100],temp[100],result;
    scanf("%[^\n]s",str);
    n=strlen(str);
    strcpy(temp,str);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(str[i]==temp[j])
            {
                count=count+1;
            }
        }
        b[i]=count;
        count=0;
    }
    max=b[0];
    for(i=0;i<n;i++)
    {
        if(max<b[i])
        {
            max=b[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(max==b[i])
        {
            result=str[i];
        }
    }
    printf("%c",result);
        return 0;
}
