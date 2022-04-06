#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)//xiaoduan1
//	{
//		return 1;
//	}
//	else  //daduan
//	{
//		return 0;
//	}
//	
//}
////int a=1;
//// char* p =(char*)&a;   把a的类型强制int*--》char*
////if *p==1?0
////
////
////
//int main()
//{//写一段代码告诉我们当前机器的字节序是什么
//	//返回1 小端
//	//返回2 大端
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
////char 无符号 0--255 +1=0
////char （八个二进制）一个字节   有符号类型（第一位是符号位）的  -128（10000000）----127（01111111）
////浮点数在内存中存储的方式
////
////
////
////
int main()
{
	int i = 10;
	int p = -10;
	printf("%f\n", i);
	printf("%d %d\n",i,p);
	return 0;
}