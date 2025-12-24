#include <stdio.h>
int main(void)
{
	//scanf_s 사용시 주의사항
	//입력 받을 데이터의 자료형에 대응하는 형식문자가 필요
	//입력받은 데이터를 저장할 메모리 공간(변수지정)필요
	//scanf (교제) -> scanf_s사용 / 이거 과제하다 오류 개많이뜸 주의

	//int num;
	//printf("값을 입력해 주세요\n");
	//scanf_s("%d", &num); //&써줘야힘
	//printf("%d", num);

	//\n같은건 출력함수에 써줘야함
	/*
	int num2;
	scanf_s("%d\n", &num2);
	*/
	//입출력 동시에 XXX
	//scanf_s("입력=%d" & num2);


	//문제-scanf사용해서 값 3개 입력받고 그것들의 합계를 구하는 코드작성
	//int num1, num2 ,num3;
	//printf("1번값 :");
	//scanf_s("%d", &num1);
	//printf("2번값 :");
	//scanf_s("%d", & num2);
	//printf("3번값 :");
	//scanf_s("%d", &num3);
	//printf("모두다 더한값 : %d\n", num1+num2+num3);


	////풀이

	//int x, y, z,total;
	//printf("숫자 3개 입력");
	//scanf_s("%d %d %d", &x, &y, &z);
	//total = x + y + z;
	//printf("%d + %d + %d = %d", x, y, z, total);


	//소수점 입력
	float so;
	printf("소수점 2자리까지 입력");
	scanf_s("%f", &so);
	printf("입력값: %.2f", so);





	return 0;
}