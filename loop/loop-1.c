#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{

	//int i;
	//int sum;

	//for (i = 1; i<=10 ; i=i+2 )
	//{



	//	sum = sum + i; //sum += i;
	//}

	




	int i = 1;
	int sum = 0;
	while (i <= 10)
	{
		sum = sum + i;
		i = i + 2;
	}





	printf("i는 %d  합은 %d\n", i, sum);





	return 0;


}
