/*
     2020年11月5日22:57:51
	 molloc 是 memory(内存) allocate（分配）的缩写
*/

# include <stdio.h>
# include <malloc.h>

int main(void)
{
	int i = 5; //分配分4个字节 静态分配
	int * p = (int *)malloc(4);   // 12行
	/*
	    1. 要使用malloc函数，必须添加malloc.h头文件
		2. malloc函数只有一个形参，并且形参是整形
		3. 形参4表示请求系统为本程序分配4个字节
		4. malloc函数只能返回一个字节的地址
		5. 12行分配了8个字节，p变量占4个字节，p指向的内存也占4个字节
		6. p本身所占的内存是静态分配的，p所指向的内存是动态分配的
	*/
	free(p);  //free(p)表示把p所指向的内存给释放掉  p本身的内存是静态的，不能又程序员手动释放
	          //p本身的内存只能在p变量所在的函数运行终止时由系统自动释放
	printf("同志们好!\n");

	return 0;
}