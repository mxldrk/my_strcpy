#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

//方法一：

//void my_strcpy(char* dest, char* src)
//{
//	//优化前:
//	/*while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//
//	}
//	*dest = *src;//'\0'*/
//   //优化后:
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, NULL);
//	printf("%s", arr1);
//	return 0;
//}
//方法二：
char* my_strcpy(char* dest,const char* src)//const 防止*src被修改
	{
	
	char* ret = dest;
	assert(dest != NULL);//断言
	assert(src != NULL);//断言
	//把字符串src的内容拷贝到字符串dest指向的空间，包含'\0';
	while (*dest++=*src++)
	{
		;
	}
	return ret;
}
int main()
{
	//strcpy
	//字符串拷贝
	char arr1[] = "##########";
	char arr2[] = "bit";
	printf("%s",my_strcpy(arr1, arr2));//链式访问
	return 0;
}