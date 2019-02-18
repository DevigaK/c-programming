#include <stdio.h>
#include<string.h>
int main()
{
    int n,i,t,t1;
    char str[100];
    scanf("%[^\n]s",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
    str[i]=str[i]+3;
    if(str[i]>91 )  
    {
        t=str[i]-91;
        str[i]=t+'A';
    }
    else if( str[i]>123)
    {
        t1=str[i]-123;
        str[i]=t1+'a';
    }
    t=0;
    t1=0;
    printf("%c",str[i]);
    }

    return 0;
}
