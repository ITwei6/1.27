#include <stdio.h>
//int main()
//{
//	int a = 20;//��ջ���ռ俪��4���ֽ�
//	char arr[10] = { 0 };//��ջ���ռ俪����10���ֽ������Ŀռ�
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
//		//ʹ�ÿռ�
//	}
//	
//	//�ͷ�
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
		p++;//p�ĵ�ַ�ı���
	}
	free(p);//��ʱ�ͷŵľͲ����ʼ�Ŀ��ٿռ��ˣ�ֻ�ǲ��ֿռ�
	p = NULL;
	return 0;
}