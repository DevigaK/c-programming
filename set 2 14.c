#include <stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char str[100];
    scanf("%[^\n]s",str);
    n=strlen(str);
    for(i=n-1;i>=0;i--)
    {
        if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u'))
        {
               str[i]='\0';
        }
        printf("%c",str[i]);
    }
        return 0;
}
