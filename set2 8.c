#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int n,i;
    scanf("%[^\n]",str);
    n=strlen(str);
    if(str[0]>='a')
    {
    str[0]=str[0]-32;
    }
    for(i=0;i<=n;i++)
    {
    if(str[i]==' ')
    {
        if(str[i+1]>='a')
        {
        str[i+1]=str[i+1]-32;
    }
    }
    }
    printf("%s  ",str);
    return 0;
}
