//[입출력 예시]
//두 수를 입력하세요. : 9 2
//2 3 4 5 6 7 8 9
//총합은 44입니다.


#include <stdio.h>
int main()
{
	int a, b, temp, i,sum=0;
	printf("***두 수 구간의 숫자 출력하기***\n");
	printf("두 수를 입력하세요 :");
	scanf_s("%d %d", &a, &b);
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	for (i = a; i <= b; i++)
	{
		printf("%d ", i);
		sum += i;
	}
		
	printf("총합은 %d입니다.\n", sum);
	return 0;
}