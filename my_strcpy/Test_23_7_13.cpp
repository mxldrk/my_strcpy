#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

//����һ��

//void my_strcpy(char* dest, char* src)
//{
//	//�Ż�ǰ:
//	/*while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//
//	}
//	*dest = *src;//'\0'*/
//   //�Ż���:
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
//	//�ַ�������
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, NULL);
//	printf("%s", arr1);
//	return 0;
//}
//��������
char* my_strcpy(char* dest,const char* src)//const ��ֹ*src���޸�
	{
	
	char* ret = dest;
	assert(dest != NULL);//����
	assert(src != NULL);//����
	//���ַ���src�����ݿ������ַ���destָ��Ŀռ䣬����'\0';
	while (*dest++=*src++)
	{
		;
	}
	return ret;
}
int main()
{
	//strcpy
	//�ַ�������
	char arr1[] = "##########";
	char arr2[] = "bit";
	printf("%s",my_strcpy(arr1, arr2));//��ʽ����
	return 0;
}