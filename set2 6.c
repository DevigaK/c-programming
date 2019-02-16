#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],count=0;
    int n,i;
    scanf("%[^\n]s",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
       if(str[i]==str[i+1])
       {
           count=count+1;
       }
       
    }
    if(count==2)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No");
    }
    return 0;
}
