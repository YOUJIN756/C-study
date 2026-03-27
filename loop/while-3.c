#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{


	int dan;
	int gop = 1;


	printf("출력하고싶은 단은? ");
		scanf("%d", &dan); //2
		
		while (gop < 10)
		{


			printf("%d * %d = %d\n", dan, gop, dan*gop);
			
			gop++;

		}










	return 0;
}






















