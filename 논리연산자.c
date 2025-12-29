#include <stdio.h>
int main(void)
{








	//	&&(and)=and: 피연산자중 하나만 true라면 false를 반환 
	//	||(or)=또는 :피연산중 하나만  true이면 true을 반환 
	// !(not)=부정 : 피연산자의 값이 true 라면 fales를 반환 
	//10>=5 && 20<=3 /true
	//10>=30 ||20<=30 /true
	//!(10>=30) / true
	int one = 10, two = 20, three = 30, four = 40;
	int result;
	result = one > two || two >= three || three > four;
	printf("결과: %d\n", result);

	result = one <= two && two <= three && three <= four;
	printf("결과: %d\n", result);

	result = !(one > two);
	printf("결과: %d\n", result);
	//출력결과:0
	//논리식에서 1: true / 0:fales






	return 0;
}