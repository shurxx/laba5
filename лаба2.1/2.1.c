#include <stdio.h>
#include <Windows.h>
//правка2
//правка2
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, min, max;
	printf("Введите первое число ");
	scanf_s("%d", &a);
	printf("Введите второе число ");
	scanf_s("%d", &b);
	if (a > b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}
	printf("Большее число = %d\n", max);
	printf("Меньшее число = %d\n", min);
}