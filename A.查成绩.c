# include <stdio.h>
# include <string.h>

typedef struct chengji{
    char a[6];
    char name[20];
    int num;
}ji;

int main()
{
    ji b[10],c[10];
    int i=0,j=0;;
    scanf("%s",b[i].a);
    while(strcmp(b,"insert")==0){
        scanf("%s%d",b[i].name,b[i].num);
        i++;
        scanf("%s",b[i].a);
    }
    while(strcmp(b[i].a,"find")==0){
        scanf("%s",b[i].name);
        for(j=0;j<i;j++){
            if(strcmp(b[j].name,b[i].name)==0)
                printf("%d\n",b[j].num);
            else
                printf("-1\n");
        }
    }
    return 0;
}