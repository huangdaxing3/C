# include <stdio.h>
# include <string.h>
int main()
{
    int i,j,len;
    char a[100];
    gets(a);
    len = strlen(a);
    for(i=0;i<len;i++){
        if(a[i]>=97 && a[i]<=122){
            a[i]-=32;
        }
    }
    puts(a);
}