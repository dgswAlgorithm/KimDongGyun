
//◦ 입력받은 문자를 아래와 같이 암호화한다.
//- 결과1 : 입력받은 문자 ASCII + 2
//- 결과2 : 입력받은 문자(ASCII * 7) % 80 + 48
//◦ 입력조건
//- 입력문자의 길이는 1~20 이하의 알파벳이다.
//- 입력문자는 공백은 포함하지 않는다.
//◦ 출력조건
//- 결과1, 결과2가 아래와 같이 모두 나오게 한다.
//
//[입출력 예시]
//입력 문자 : TEST
//  결과1 : VGUV
//	결과2 : L3EL
//
//	입력 문자 : Hello_world ^ ^;
//  결과1: Jgnnqayqtnf’‘ =
//	결과2 : HsTTiIQi~TIBB =


#include <stdio.h>
int main()
{
	char pw[50];
	int i;
	printf("암호를 입력하시오. : ");
	//scanf_s("%s", pw);  //scanf와 gets 의 차이점을 말해보세요.
	gets_s(pw,50);
	printf("결과 1 : ");
	for (i = 0; pw[i] != NULL; i++)
		printf("%c", pw[i] + 2);
	printf("\n결과 2 : ");
	for (i = 0; pw[i] != NULL; i++)
		printf("%c", (pw[i] * 7) % 80 + 48);
	return 0;
}