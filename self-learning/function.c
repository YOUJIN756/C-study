#include <stdio.h>

int digit(int n)
{
	if (n < 10) return n;  //n이 10보다 작을때 반환
	return (n % 10) + digit(n / 10);  //n의 마지막 자릿수(n%10)와 나머지 앞부분 숫자들 n/10의 자릿수 합 digit(n/10)을 더한값을 반환한다
}

int main()
{
	printf("%d", digit(235)); //235 각 자릿수 더한 값 출력
}
