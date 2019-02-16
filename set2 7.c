#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],temp[100];
    int n,i;
    scanf("%[^\n]",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        temp[i]=str[i];
        str[i]=str[i+2];
        str[i+2]=temp[i];
        }
        printf("%s",str);
    return 0;
}
