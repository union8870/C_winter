#include<stdio.h>
int main(void)
{

	//산술연산자, 대입연산자,  비교연산자,  복합대입연산자,  증감연산자,  논리연산자, 삼항조건연산자
	//산술연산자 : + , - , * , / , %(나머지 표시)
	//피연산자 = 연산되는 숫자들 
	
	int num1 = 7, num2 = 3;
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 -  num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 %  num2);//%문자로 사용하고 싶으면 %%이렇게 두번 써주면 됨 
	//int + int = int 
	//int + float = float
	//int + char =int
	//char + char = char
	//char + float = float
	//float + float = float
	//항상 손실이 없는 자료형으로 됨

	int number1 = 1;
	float number2 = 1.2f;
	printf("%d + %.1f = %.1f", number1, number2, number1 + number2);

	//int num = -6;

	//대입 연산자 = 이항연산자 (피연산자가 2개가 필요함)
	//오른쪽에 있는 값을 연산자 왼쪽에 있는 변수에 대입


	//	복합대입연산자
	//a+=b : a= a+b
	//a-=b : a= a+b
	//a*=b : a= a+b
	//a/=b : a= a+b
	//a%=b : a= a+b


	int x = 3, y = 4;
	int result = x += y;
	printf("%d", result);

	y *= 4;
	printf("%d\n", y);

	//비교연산자
	//a > b
	//a < b
	//a >= b
	//a <= b
	//a == b
	//a != b (a는 b와 다르다)
	//!는 값이 아니라 참,거짓을 다루는데 쓰임
	//! 는 값을 뒤집는 연산자
	// true :1 false :0

	int a = 1, b = 10;
	printf("a>b: %d\n", a > b);
	printf("a==b: %d\n", a == b);
	printf("a!=b: %d\n", a != b);

	//증감연산자 (단항연산자) | 피연산자가 1개만 있어도 됨 
	//숫자형 데이터를 1씩 증가시키거나 감소시킴
	//변수--; 또는 --변수;
	//변수++; 또는 ++변수;
	// int a = ++b;			먼저 증가연산이 실행된 후 증가된 b의 값을 a에 대입 
	// int a = b++;			b의 값을 먼저 대입한 후 b의 값이 증가됨

	int A = 10, B = 20;
	printf("A = %d\n", A);
	printf("A : %d\n", A++);
	printf("A : %d\n", A);

	printf("B = %d\n", B);
	printf("B : %d\n", ++B);
	printf("B : %d\n", B);

	//연산자의 우선순위
	int  num3, num4, num5, num6,result2;
	num3 = 3;
	num4 = 4;
	num5 = 5;
	num6 = 6;
	result2 = num3 + num4 * num5 + num6;
	printf("%d+%d*%d+%d = %d", num3, num4, num5, num6, result2);
	//곱셈과 나눗셈중 먼저 (수식중 앞에있는거) 나오는거 뒤에 더하기 빼기 진행 
	return 0;
}