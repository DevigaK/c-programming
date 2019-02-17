#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    if(str[0]=='S'|| str[0]=='s')
    {
        printf("yes\n");
    }
    else
    {
        printf("No\n");
    }
   
    return 0;
}
