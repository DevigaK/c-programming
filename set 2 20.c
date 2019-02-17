#include<string.h>
#include <stdio.h>

int main()
{
    char str[100];
    int n,i;
    scanf("%[^\n]s",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        str[i]=str[i]+3;
    
    printf("%c",str[i]);
}
    return 0;
}
