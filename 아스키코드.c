#include <stdio.h>

int main(void)
{
	char ch1 = 'A';
	printf("%c\n", ch1);
	
	char ch2 = 65;  //아스키 코드에서 65는 대문자A를 뜻하고 이를 문자 서식자로 표현하게 되서 A가 출력 
	printf("%c\n", ch2);

	printf("%d\n", ch2);
	//정상적으로 65가 출력되는 걸 확인할 수 있음 

	printf("숫자 : %d / 문자 : %c", ch2 ,ch2);



	return 0;
}