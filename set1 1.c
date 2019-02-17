#include <stdio.h>
#include<string.h>
int main()
{
    char str[100],rev[100];
    int n,i;
    scanf("%[^\n]s",str);
    n=strlen(str);
    for(i=n-1;i>=0;i--)
    {
       
    printf("%c",str[i]);
    }
    return 0;
}
