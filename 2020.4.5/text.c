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
//// char* p =(char*)&a;   ��a������ǿ��int*--��char*
////if *p==1?0
////
////
////
//int main()
//{//дһ�δ���������ǵ�ǰ�������ֽ�����ʲô
//	//����1 С��
//	//����2 ���
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}
////char �޷��� 0--255 +1=0
////char ���˸������ƣ�һ���ֽ�   �з������ͣ���һλ�Ƿ���λ����  -128��10000000��----127��01111111��
////���������ڴ��д洢�ķ�ʽ
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