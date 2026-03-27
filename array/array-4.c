#include <stdio.h>









void f1()  //함수 f1 생성
{

	int a[2][3] = { {4,5,6},{7,8,9} };

	a[0][0] = 4;
	a[0][1] = 5;
	a[0][2] = 6;
	a[1][0] = 7;
	a[1][1] = 8;
	a[1][2] = 9;

	printf("%d\n", a[0][0]);
	printf("%d\n", a[0][1]);
	printf("%d\n", a[0][2]);
	printf("%d\n", a[1][0]);
	printf("%d\n", a[1][1]);
	printf("%d\n", a[1][2]);

	printf("================================================\n");

}


void f2()
{
	int b[2][3];                          //2행 3열
	int totalsize = sizeof(b);            //24바이트
	printf("%d\n", totalsize);            //배열 b 전체 사이즈
	int bsize = sizeof(b[0]);             //0번째 행의 사이즈, 12바이트
	printf("%d\n", bsize);          
	printf("%d\n", sizef(b[0][0]));       //0의 0번째 원소의 사이즈 , 4바이트
	printf("%d\n", sizeof(b) / sizeof(b[0]));    //전체 크기/한 행 크기
	printf("%d\n", sizeof(b[0]) / sizeof(b[0][0])); //한 행 크기/한 원소

	printf("====================================================\n");

}





















int main()  //main 함수 1개, 처음 시작할 때 main부터 시작
{
	f1();  //함수는 ()소괄호가 있어야 함
	f2();
	f3();  // 함수호출



	return 0;
}


void f3()
void f1() //함수 f1생성 //호출 해야만 함
void arrpront()
{
	int a[2][3] = { {1,2,3},{4,5,6} };                   //a[0][0]=1  [0][1]=2  [1][0]=4  [1][1]=5  [1][2]=6
	arrPrin(a);                                          //인수 보내면서 함수 호출, a배열([2][3]전체를) arrPrint함수를 호출할 때 같이 보냄

	int b[2][3] = { {1},{4} };   //1 0 0 4 0 0
	arrPrin(b);

	int c[2][3] = { {1,2} };   //1 2 0 0 0 0
	arrPrin(c);

	int d[2][3] = { 1,2,3,4,5,6 };
	arrPrin(d);

	int i[2][3] = { 1,2,3,4 };  //1 2 3 4 0 0
	arrPrin(i);

	int j[2][3] = { 1,2 };  //1 2 000000
	arrPrin(j);

	int k[2][3] = { 0 };  //000000
	arrPrin(k);
	


}



void arrpront(int k[2][3])   //k를 매개변수 인수와 유형, 개수 동일
{

	for (int i = 0; i < 2; i++)    //0~1행
	{
		for (int j = 0; j < 3; j++)   //0~2열
		{

			printf("%2d", k[i][j]);

		}

		printf("\n");


	}







}







