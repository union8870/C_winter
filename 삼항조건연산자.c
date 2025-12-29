#include<stdio.h>
int main(void)
{
	//조건식 ? 정답일시 출력할 내용 : 거짓이라면 출력될 내용;
	int ten = 10, two = 20;
	int max;
	max = ten > two ? ten : two;
	printf("max에 들어있는 값 : %d\n", max);

	//나이를 입력 받아 미성년자 인지 판별인지 
	//성인이라면 1출력 미성년자면 0출력 
	//성인의 기준은 19살

	int 나이, result;
	printf("나이를 입력하세요 : ");
	scanf_s("%d",& 나이);
	result=나이 >= 19 ? 1 : 0;
	printf("%d\n", result);

	//사용자가 20살 이상이라면 지하철 요금은 1280원 20살 미만이라면 800원 
	//출력 :21세의 지하철 요금은 1280원 입니다
	int age, 결과;
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);
	int ch = age >= 20 ? 1280 : 800;
	printf("%d세의 지하철 요금은 %d원 입니다\n", result,ch);


	//숫자를 입력 받아서	짝수라면 0을 출력하고 홀수라면 1을 출력 
	//출력 :입력한 결과는 x이며 , 결과 :

	int num;
	printf("숫자를 입력해 주세요 : ");
	scanf_s("%d", & num);
	int 나눗셈 = num % 2 == 0 ? 0 : 1;
	printf("입력한 결과는 %d이며, 결과는 %d입니다\n", num, 나눗셈);

	int score = 85;
	char grade = score >= 90 ? 'A' : score >= 80 ? 'B' : score >= 70 ? 'C' : 'D';
	printf("학점 : %c\n", grade);














	return 0;
}