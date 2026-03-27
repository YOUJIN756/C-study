
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int num[5] = { 10,20,30,40,50 };
	int num2[] = { 10,20,30 }; //배열  초기값 3개  [] <-3 생략됨
	printf("%d\n", num[2]); //30출력,  배열 0부터 시작


	int num4[5] = { 1,2 }; //1,2,0,0,0
 int num4[5] = { 4 }; //4,0,0,0,0
 int num4[5] = { 0 }; //0,0,0,0,0

 int num6[5];
 int num6[0] = 100;
 int num6[1] = 200;
 int num6[2] = 300;
 int num6[3] = 400;
 int num6[4] = 500;


 /*printf("%d\n", num6[0]);
 printf("%d\n", num6[1]);
 printf("%d\n", num6[2]);
 printf("%d\n", num6[3]);
 printf("%d\n", num6[4]);*/

 for (int i = 0; i < 5; i++) //0~4까지 5번 반복
 {

	 printf("%d\n", num6[i]); //배열 요소값 출력


 }











	return 0;
}