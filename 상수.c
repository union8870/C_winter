#include <stdio.h>
#define PI = 3.14 //define=정의한다 PI=PI를 3.14= 3.14로 그래서 코드에 PI가 있으면 3.14로 치환 
int main(void)
{
	//상수 : 변하지 않는 값
	//상수 초기화시에는 선언과 동시에 초기화 해줘야함
	
	//리터럴상수 : 그냥 값 자체
	printf("%d\n", 10);
	
	//심볼릭 상수
	//심볼릭상수는 이름을 대문자로 많이 선언(보기편함)
	const int MYCONST = 85;
	const int YOURCONST;

	const char* FRIEND_HOME = "인천광역시 연수구 송도동";
	printf("약속 장소 = %s\n", FRIEND_HOME);
	return 0;

	//*을 사용해서 포인터 변수 지정 
	//포인터 함수를 사용해 문자를 가지고도 상수로 지정 가눙 

}