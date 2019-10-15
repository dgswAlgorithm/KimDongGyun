#include<stdio.h>

int main()
{
	char string[] = "Hello";
	char* pstr = string;
	while (*pstr)
	{
		putchar(*pstr++);
	}
	return 0;
}

//거꾸로 출력하기
