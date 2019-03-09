#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],rev[100];
    scanf("%[^\n]s",str);
   
    int i,j,n;
    n=strlen(str);
    for(i=n-1,j=0;i>=0,j<n;i--)
    {
        rev[j]=str[i];
        
        j++;
    }
  
    
        printf("%s",rev);
    
    return 0;
    
}
