#define  _CRT_SECURE_NO_WARNINGS
//������ͷ�ļ�����������ʱ�������ַ������ȣ��õݹ�ķ�����
#include <stdio.h>
#include <assert.h>
int my_strlen(char *str)
{
	assert(str);
	if (*str != '/0')
	{
		return 1 + my_strlen(str + 1);
	}
}
//int main()
//{
//	char arr[] = "abcde";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//
//}
//strcpy (�ķ���������char* ����Դͷ�����ݿ�����Ŀ�ĵ���ȥ�����պ������ص����Ǹ�Ŀ�ĵص���ʼλ��
//char* my_strcpy(char *dest,const char* src)//Դͷ��Ŀ�ĵز��ᷢ���仯
//
//{
//	assert(dest !=NULL);
//	assert(src != NULL);
//	//ȷ�����ص�Ŀ�ĵ���ʼλ�ú�ԭ�����ֲ���
//	char* ret = dest;
//	//����srcָ����ַ�����dest ָ��Ŀռ䣬������/0��
//	while (*dest++ = *src++)//*srcָ�� b ��ʱ�� ��*dest ָ��a��ʱ�� ��b�ŵ�a��λ�������֮����ʽ�������b ��b��=/0	���ȸ�ֵ��++���ж��Ƿ�Ϊ/0
//	{
//	;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;

char * my_strcat(char*dest,const char*src)
{
	assert(dest);
     assert(src);
	 char *ret = dest;
	 //1�ҵ�Ŀ���/0
	 while (*dest!='\0')
	 {
		 dest ++;
	 }
	 //׷��
	 while (*dest++ = *src++)
	 {
		 ;
	 }
	 return ret;
	
}
int my_strcmp(const char* str1,const char* str2)
{
	assert(str1 && str2);

	while (*str1++ == *str2++)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		
	}
	if (*str1 > *str2)
		return 1;
	else
		return -1;

}
int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "bit";
	char* arr3 = "abcdef";
	char* arr4 = "abcdef";
	//strcpy(arr1, arr2);//Ŀ�ĵأ�Դͷ
//	my_strcpy(arr1,arr2);
	//my_strcat(arr1, arr2);
	my_strcmp(arr3,arr4);
	int ret = my_strcmp(arr3, arr4);
	printf("%d\n", ret);
	return 0;
}
//strcpy,Դ�ַ����������/0��Ŀ��ռ�����㹻��	����֤Ŀ�ĵؿ��Ըı�

//Ŀ�ĵأ�Դ�ַ����������/0��Ŀ��ռ�����㹻��	����֤Ŀ�ĵؿ��Ըı�
//strcat �ַ���׷�� �����/0����ȥ��׷����Ŀ�ĵص�/0λ�õĿ�ʼ

//strcmp �ַ����Ƚ� ���Ƚ������ַ������ݵĴ�С��ϵ ��һ���ַ� ���� �ڶ����ַ� ���ش���0�����֣� �ַ���1 < �ַ���2 ����һ��<0������

//���Ȳ������Ƶ��ַ�������
//strcpy strcat strcmp
//�����Ƶ��ַ�������
//strncpy ���Դ�ַ���С��num���򿽱���Դ�ַ�������Ŀ��ĺ���׷��0