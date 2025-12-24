#include <stdio.h>
int main(void)
{
	printf("%zu", sizeof(int));
	printf("%zu", sizeof(char));
	printf("%zu", sizeof(short));
	printf("%zu", sizeof(float));
	printf("%zu\n", sizeof(double));

	float f = 3.14f; //3.14뒤에 붙는 f는 접미사 
	printf("%f\n", f);

	unsigned char ch;
	unsigned short	sh;
	unsigned int in;
	ch = 128;
	sh = 50000;
	in = 4100000000;
	printf("%d\n", ch);
	printf("%d\n", sh);
	printf("%d\n", in);
	//그래서 int 만 값이 이상하게 나오는걸 확인 %u를 써야됨
	//%d 는 int 값 범위내에서만 정상작동한다 / -21억~21억

	char num = 255;
	printf("%d", num);


	//225 /2 = 127....1
	//127 / 2= 63....1
	//63 /2 = 31....1
	//31 /2 = 15....1
	//15 /2 = 7....1
	//3 /2 = 3....1
	//1 /2 = 1....1
	//1/2 = 0....1
	//10000001 = -1

	return 0;
}




//이진수 
//자료형을 선언 안해주면 int로 사용함
//2진수
//0+0=0 / 0+1=1 / 1+0=1 / 1+1=10
//2의 보수 
//부호비트 바꾸고 모든비트를 반전시킨 후 +1
//2진수 10진수 변환
//0			1			1			0			1			0			0			1
//128		 64		32		16		8			4			2			1
//64+32+8+1=105
//불이 들어온(1)의 자리만 다 더하면 됨 

