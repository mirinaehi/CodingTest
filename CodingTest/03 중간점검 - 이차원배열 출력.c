#include <stdio.h>

int main(void)
{
	// 이차원배열 아무거나 만들어보고 각각의 원소를 출력하기
	// 생략

	// 문자열의 길이(5가 나오도록)를 구하시오
	char str[30] = "Hello";
	int length = 0;		// 문자열의 길이

	// 문자로 판별될 경우 length를 카운팅(1씩 증가)
	for (int i = 0; str[i] != '\0'; i++)
	{
			length++;
	}
	printf("길이는 %d", length);
	
	return 0;

}