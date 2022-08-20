#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
	//二维数组的创建
	//int arr[3][4];
	//char ch[3][10];
	////初始化 - 创建的时候同时给赋值
	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//int arr[3][4] = { 1,2,3,4,5,6,7 };//不完全初始化 - 后面补0
	//int arr[3][4] = { {1,2},{3,4},{5,6} };
	//int arr[][4] = { {1,2},{3,4},{5,6} };
	//int i = 0;
	//int j = 0;
	//二维数组的存储
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//		printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
	//}
//	int* p = arr;
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d\n", *(p + i)); //二维数组在内存中连续存放
//	}
//	return 0;
//}

//冒泡排序 升序排列

//void bubble(int *arr,int num)
//{
//	int i = 0;
//	int j = 0;
//	//确定趟数
//	for (i = 0; i < num - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main() 
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	bubble(arr,sizeof(arr)/sizeof(arr[0]));//sizeof(arr)传递的是数组首元素地址
//	return 0;
//}

