char * countAndSay(int n){
    char *mark=(char *)malloc(sizeof(char)*5000);
    char *temp=(char *)malloc(sizeof(char)*5000);
    mark[0]='1';
    mark[1]='\0';//结束标志
    int i,count,j;
    char key,*p;
    for(i=1;i<n;i++)//迭代次数
    {
        j=0;
        key=mark[0];
        count=0;
        p=mark;
        while(*p!='\0')
        {
            if(*p==key)//计数
                count++;
            else{
                temp[j++]=count+'0';//先存计数器
                count=1;
                temp[j++]=key;//再存关键字
                key=*p;
            }
            p++;

        }
        temp[j++]=count+'0';//先存计数器
        temp[j++]=key;//再存关键字
        temp[j]='\0';
        strcpy(mark,temp);
    }
    return mark;
}