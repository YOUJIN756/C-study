#include <stdio.h>
int main()
{
	int a[5] = { 9, 1, 7, 3, 5 };
	int i, j, min, t;
	for (i = 0; i < 4; i++)
	{
		min;

		for (j = i + 1; j < 5; j++)
		{
			if (a[j] < a[min])
				min = j;
		}
		t = a[i];
		a[i] = a[min];
		a[min] = t;
	}

	for (i = 0; i < 5; i++)
	{
		printf("%2d", a[i]);
	}

}