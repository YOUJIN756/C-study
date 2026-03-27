//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//
//int main()
//{
//
//
//
//
//
//	int i, j;
//
//	for (int i = 2; i <= 12;i++)
//	{
//
//		for (int j = 1; j <= 9;j++)
//		{
//			printf("%d * %d = %d\t", i, j, i * j);   
//			printf("%d * %d = %d\t", i+1, j, (i+1) * j);   
//			printf("%d * %d = %d\n", i+2, j, (i+2) * j);   
//
//		}
//
//
//	}
//
//
//
//
//
//
//	return 0;
//}
//
//















#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{                            //i=i+3은 2,3,4단 후 5,6,7단 8,9,10단 이런식으로 넘어가기 위해서
    for (int i = 2; i <= 12; i += 3)    //i는 단(2~12)  
    {
        printf("  %d단\t\t  %d단\t\t  %d단\n", i, i + 1, i + 2);

        for (int j = 1; j <= 9; j++)
        {
            printf("%d x %d = %d\t", i, j, i * j);
            printf("%d x %d = %d\t", i + 1, j, (i + 1) * j);
            printf("%d x %d = %d\n", i + 2, j, (i + 2) * j);
        }

        printf("\n"); // 단 사이 띄우기
    }

    return 0;
}

