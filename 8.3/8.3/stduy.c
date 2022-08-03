#define  _CRT_SECURE_NO_WARNINGS
//不引用头文件，不创建临时变量求字符串长度（用递归的方法）
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
//strcpy (的返回类型是char* ，把源头的数据拷贝到目的地里去，最终函数返回的是那个目的地的起始位置
//char* my_strcpy(char *dest,const char* src)//源头的目的地不会发生变化
//
//{
//	assert(dest !=NULL);
//	assert(src != NULL);
//	//确保返回的目的地起始位置和原来保持不变
//	char* ret = dest;
//	//拷贝src指向的字符串到dest 指向的空间，包含‘/0’
//	while (*dest++ = *src++)//*src指向 b 的时候 ，*dest 指向a的时候 把b放到a的位置里，完了之后表达式结果就是b ，b！=/0	，先赋值加++再判断是否为/0
//	{
//	;
//	}
//	//返回目的空间的起始地址
//	return ret;

char * my_strcat(char*dest,const char*src)
{
	assert(dest);
     assert(src);
	 char *ret = dest;
	 //1找到目标的/0
	 while (*dest!='\0')
	 {
		 dest ++;
	 }
	 //追加
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
	//strcpy(arr1, arr2);//目的地，源头
//	my_strcpy(arr1,arr2);
	//my_strcat(arr1, arr2);
	my_strcmp(arr3,arr4);
	int ret = my_strcmp(arr3, arr4);
	printf("%d\n", ret);
	return 0;
}
//strcpy,源字符串必须包含/0，目标空间必须足够大	，保证目的地可以改变

//目的地，源字符串必须包含/0，目标空间必须足够大	，保证目的地可以改变
//strcat 字符串追加 ，会把/0传过去，追加在目的地的/0位置的开始

//strcmp 字符串比较 （比较两个字符串内容的大小关系 第一个字符 大于 第二个字符 返回大于0的数字） 字符串1 < 字符串2 返回一个<0的数字

//长度不受限制的字符串函数
//strcpy strcat strcmp
//受限制的字符串函数
//strncpy 如果源字符串小于num，则拷贝完源字符串后，在目标的后面追加0