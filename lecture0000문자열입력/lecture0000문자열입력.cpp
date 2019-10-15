

#include <stdio.h>
int main()
{
	char pw[50];
	int i;
	printf("암호를 입력하시오. : ");
	scanf_s("%s", pw, sizeof(pw));
	//gets_s(pw, 50);

	printf("%s", pw);
}

