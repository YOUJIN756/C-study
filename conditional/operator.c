








#include <stdio.h>

int main()
{
	int num1, num2; 
	int res1;   //sum, sub, mul;
	double res2; //double divi;
	char op, a;

	while (1) // 1은 항상 참이므로 무한 반복
	{
		printf("첫번째 숫자를 입력하세요:  ");
		scanf_s("%d", &num1);
		printf("연산자를 입력하세요(+ - * /):  ");
		scanf_s(" %c", &op);
		printf("두번째 숫자를 입력하세요:  ");
		scanf_s("%d", &num2);

		switch (op) {

		case '+':   //연산자가 +면 더함
			res1 = num1 + num2;
			break;

		case '-':  //연산자가 -면 뺌
			res1 = num1 - num2;
			break;

		case '*':  //연산자가 *면 곱함
			res1 = num1 * num2;
			break;

		case '/':  
			res2 = (double)num1 / num2; //소수점까지 나오게 하기 위해(double)을 씀
			break;

		} 
		if (op == '+' || op == '-' || op == '*') //연산자에 따라 출력 결정
			printf("연산 결과: %d\n", res1);
		else if (op == '/')
			printf("연산 결과: %.2f\n", res2);
		else
			printf("입력 오류");

		printf("연산을 종료하시겠습니까?(y/Y)"); 
		scanf_s(" %c", &a); //종료 여부 입력
		if (a == 'y' || a == 'Y')  // ll는 하나만 만족하면 되는 것, or의 역할이다.  (and의 역할은 &&)
			break;
		
	}
	return 0;
}




