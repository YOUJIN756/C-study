#include <stdio.h>

int main(void)
{
	int i = 3000;
	int* p = NULL; //포인터 변수 선언

	p = &i; //i변수의 주소를 p 포인터 변수에 줌

	printf("p=%p\n", p);
	//%p : 주소를 출력하는 서식 문자
	printf("&i = %p\n\n", &i);

	printf("i=%d\n", i);
	printf("*p=%d\n", *p);
	// 주소에 저장된 내용에 접근하는 포인터
	

	//ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ


	int x = 10, y = 20;
	int* pi;  //포인트 변수

	pi = &x; //x에 주소를 pi라는 포인트 변수에 준다
		printf("*pi=%p\n", *pi); //x에 주소는 pi가 가지고 있고 pi를 출력
		printf("*pi=%d\n", *pi); //pi가 가르키는 곳의 값, x출력

		pi = &y; //y에 pi 포인트 변수 줌
		printf("*p=%p\n", *p);
		printf("*p=%d\n", *p);

		return 0;


}
