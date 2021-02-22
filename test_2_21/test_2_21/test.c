#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void menu()
//{
//	printf("*********************************************\n");
//	printf("*********  1.add         2.sub  *************\n");
//	printf("*********  3.mul         4.div  *************\n");
//	printf("*********  5.xor         0.exit *************\n");
//	printf("*********************************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int Xor(int x, int y)
//{
//	return x ^ y;
//}

//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	int(*parr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数:");
//			scanf("%d%d", &x, &y);
//			int ret = parr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("请重新选择\n");
//		}
//
//	} while (input);
//}

//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数：");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//				break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//}

//int main()
//{
//	int(*pf)(int, int); // 函数指针
//	int(*pfArr[4])(int, int); // pfArr是一个数组—函数指针的数组
//	//ppfArr是一个指向函数指针数组的指针
//	 
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//
//	// ppfArr是一个数组指针,指针指向的数组有4个元素
//	// 指向的数组的每个元素的类型是一个函数指针 int(*)(int,int)
//	return 0;
//}

//void bubble_stor(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
struct Stu
{
	char name[20];
	int age;
};

int cmp_int(const void*e1, const void*e2)
{
	return *(int*)e1 - *(int*)e2;
}

//void test1()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr)[0];
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int cmp_float(const void*e1, const void*e2)
//{
//	return((int) (*(float*)e1 - *(float*)e2));
//}
//
//void test2()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0 };
//	int sz = sizeof(f) / sizeof(f)[0];
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//}
//
//int cmp_stu_by_age(const void*e1, const void*e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//
//int cmp_stu_by_name(const void*e1, const void*e2)
//{
//	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);
//}
//
//void test3()
//{
//	struct Stu s[3] = { {"张三",20},{"李四",30},{"王五",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	// 第一个参数：待排序数组的元素地址
//    // 第二个参数：待排序数组的元素个数
//	// 第三个参数：待排序数组的每个元素的大小—单位是字节
//	// 第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现
//	//             函数指针的两个参数是：待比较的两个元素的地址               
//} 

void Swap(char*buf1, char*buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void*base, int sz, int width,int(*cmp)(void*e1,void*e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)> 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1)*width,width);
			}
		}
	}
}

void test4()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
}

void test5()
{
	struct Stu s[3] = { {"张三",20},{"李四",30},{"王五",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	//bubble_stor(s,sz,sizeof(s[0],cmp_stu_by_age);
}

int main()
{
	//bubble_stor(arr, sz);
	//test1(); 
	//test2();
	//test3();
	test4();
	return 0;
}
