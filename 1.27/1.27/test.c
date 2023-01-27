#include <stdio.h>
//int main()
//{
//	int a = 20;//在栈区空间开辟4个字节
//	char arr[10] = { 0 };//在栈区空间开辟了10个字节连续的空间
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[n] = { 0 };
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int* p=(int*)malloc(n * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		*(p + i) = 0;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
#include <stdlib.h>
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p != NULL)
//	{
//		//使用空间
//	}
//	
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}
int main()
{
	int* p = (int*)malloc(10 * sizeof(int));
	if (p != NULL)
	{
		*p = 0;
		p++;//p的地址改变了
	}
	free(p);//这时释放的就不是最开始的开辟空间了，只是部分空间
	p = NULL;
	return 0;
}