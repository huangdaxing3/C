# include <stdio.h>
# include <string.h>
int main()
{
    int n,i,j,len;
    char a[55];
    scanf("%d%s",&n,a);
    len = strlen(a);
    for(i=0;i<len;i++)
        a[i]=(a[i]-'a'+n)%26+'a';
    printf("%s\n",a);
}

/*
#include<stdio.h> 
#include<string.h> 
int main() 
{ 	
    char a[52]; 	
    int i,n,l,j; 	
    scanf("%d%s",&n,a); 	
    l=strlen(a); 	
    for(i=0;i<l;i++) 	
    { 		
        for(j=1;j<=n;j++) 		
        { 			
            a[i]++; 			
            if(a[i]>'z') 				
            a[i]='a';			 		
        } 	
    }
    printf("%s",a); 
}
*/
