#include <stdio.h>

int main()
{
	//문자 10개를 저장할 수 있는 배열을 만들고 
	//10개의 문자를 입력받아 입력받은 문자를 
	//이어서 출력하는 프로그램을 작성하시오.

	char a[10];
	
	for (int i = 0; i < 10; i++)
		scanf(" %c", &a[i]);
	
	for (int i = 0; i < 10; i++)
		printf("%c", a[i]);
	return 0;
}