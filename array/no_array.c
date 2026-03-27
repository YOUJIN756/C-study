#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{


	/*int a;
	int b;
	int c;

	int hap;
	float p;

	    printf("정수 입력: ");
		scanf("%d", &a);

		printf("정수 입력: ");
		scanf("%d", &b);

		printf("정수 입력: ");
		scanf("%d", &c);


		hap = a + b + c;
		p = hap / 3.;


		printf("합 : %d\n" , hap );

		printf("평균 : %.2f", p);




	return 0;
}*/








int price, money, change;
int c5000, c1000, c100;


printf("물건 값을 입력하시요: ");
scanf("%d", &price);

printf("투입한 금액을 입력하시오: ");
scanf("%d", &money);

change = money - price;

c5000 = change / 5000;
change = change % 5000;

c1000 = change / 1000;
change = change % 1000;


c100 = change / 100;
change = change % 100;


printf("\n오천원권: %d장\n", c5000);
printf("천원권: %d장\n", c1000);
printf("백원 동전: %d개\n", c100);
printf("남은 잔돈: %d원\n", change);



return 0;
}




