#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define STUDENTS 5
             //기호상수 5 -> STUDENTS


int main(void)
{

	int score[STUDENTS]; //5개 선언한 것
	int sum = 0;  //누적 변수는 0으로

	float avg;



	for (int i = 0; i < 5; i++)
	{

		printf("학생들의 성적을 입력하세요: ");
		scanf("%d", &score[i]);

		sum = sum + score[i];


	}

	
	avg = sum / 5.;

























	return 0;
}