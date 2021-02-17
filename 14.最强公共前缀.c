char * longestCommonPrefix(char ** strs, int strsSize){
    //空时直接输出空指针
    if(strsSize==0)  return "";
    //只有一个时直接原样输出
    if(strsSize==1)  return strs[0];
    //创建一个字符数组并让其等于前两个字符的公共前缀
	char* ans=(char*)malloc(200*sizeof(char));
	for(int j=0;;j++){
        if(strs[0][j]=='\0' || strs[1][j]=='\0'){
            ans[j]='\0';
            break;
        }
		if(strs[0][j]==strs[1][j]){
			ans[j]=strs[0][j];
			ans[j+1]='\0';
		}
		else{
			ans[j]='\0';
			break;
		}
	}
    //以ans和第3到第strsSize个字符串逐位比较取公共前缀
	for(int i=2;i<strsSize;i++){
        //检测公共部分和当前字符串若一方为空则直接return空指针
		if(ans[0]=='\0' || strs[i][0]=='\0'){
			return "";    
		}
		for(int j=0;strs[i][j]!='\0' || ans[j]!='\0';j++){
			if(strs[i][j]!=ans[j]){
                ans[j]='\0';
				break;
			}
		}
	}
	return ans;
}