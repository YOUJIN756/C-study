
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{


//int i;
//int sum = 0;
//printf("정수를 입력하세요: ");
//scanf("%d", &num); //10입력
//for (i = 1; i <= num;i++)
//{
//	sum = sum + i;
//}
//printf("합계: %d", sum);
//




//int i, j;                                        //정수 변수 선언
//printf("원하는 단을 입력하세요: "); 
//scanf("%d", &i);                                //단 입력 (i엔 그 단 숫자가 들어감)
//printf("<%d 단 >\n", i);                       //몇단인지 출력
//
//for (j = 1; j <= 9; j++)                      //j에 1이 들어감, j가 9까지 갈때까지 1씩 올라가면서 괄호 안 반복
//{
//	printf("%d * %d = %d\n", i, j, i * j);     //곱하는 d엔 각각 i와 j가 들어감, 결과값은 i와 j를 곱한 값이 들어감
//}
//
//



	int i, j;

	for (int i = 2; i <= 9;i++)
	{

		for (int j = 1; j <= 9;j++)
		{
			printf("%d * %d = %3d\n", i, j, i * j);    //3d -> 3자리, -를 붙이면 왼쪽정렬
		}


	}






















	return 0;
}





























