# include <stdio.h>
# include <string.h>
int main()
{
    int i,len,count=0,b[27]={0};
    char a[85];
    gets(a);
    len = strlen(a);
    for(i=0;i<len;i++){
        if(a[i]>='A' && a[i]<='Z'){
            if(b[a[i]-65]==0){
                printf("%c",a[i]);
                b[a[i]-65]++;
                count++;
            }
        }
    }
    if(count==0)
        printf("Not Found\n");
}