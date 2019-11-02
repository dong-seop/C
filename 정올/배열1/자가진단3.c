#pragma warning (disable: 4996)
#include <stdio.h>
//10개의 문자를 입력받아서 첫 번째 네 번째 일곱 번째 
//입력받은 문자를 차례로 출력하는 프로그램을 작성하시오.

int main()
{
	char arr[10];
	for (int i = 0; i < 10; i++)
		scanf(" %c", &arr[i]);
	printf("%c %c %c ", arr[0], arr[3], arr[6]);
	return 0;
}