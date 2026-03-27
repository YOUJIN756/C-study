#include <stdio.h>

int main()
{
//	int i, cnt = 0;
//	for (i = 1;i <= 100;i++) //i는 1, i가 100이랑 같을 때까지 1씩 증가
//	{
//		if (i % 3 == 0 && i % 7 == 0) //3과 7을 나눴을 때 나머지가 0일 때
//		{
//			printf("%d*", i); //출력
//		}
//
//
//	}
//
//
//
//	return 0;
//}







int i;
for (i = 0; i < 10; i++) //i는 0, 10보다 작을 때 i는 1씩 증가
{	if (i % 3 == 0) continue; //이 조건에 걸린 것은 빼고 진행
    if (i > 5) break; //조건에 걸리면 멈춤
    printf("%d", i);
}


return 0;
}




