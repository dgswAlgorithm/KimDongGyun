//◦ 장난꾸러기 앵무새가 있다.이 앵무새는 사람이 하는 말의 철자를 거꾸로 말한다.
//◦ 앵무새에게 “Hello”라고 하면 앵무새는 “olleH”라고 철자를 말한다.
//◦ 입력 글자의 길이는 100미만이다.


#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	int i;

	printf("단어를 말하세요 : ");
	gets_s(str,100);
	for (i = strlen(str) - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	return 0;
}