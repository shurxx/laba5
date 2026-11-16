#include <stdio.h>
#include <Windows.h>

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c;
	int max;

	printf("Введите 3 числа ");
	scanf_s("%d%d%d", &a, &b, &c);
	
	max = a;
	if (max < b)
	{
		printf("Большее число = %d\n", b);
	}
	if (b < c)
	{
		printf("Большее число = %d\n", c);
	}
	else
	{
		printf("Большее число = %d\n", a);
	}


}