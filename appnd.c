#include <stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i,n;
    n=strlen(str);
    scanf("%s",str);
    for(i=0;i<=n;i++)
    {
        if(str[i]=='\0')
        {
            str[i]='.';
        }
    }
    
      printf("%s",str);  
    

    return 0;
}
