#include <stdio.h>

int i = 0;
//자료형 + * 변수명
//해당 포인터에게 전달된 주소를 해석하는 단위
int* pInt = &i;


void main()
{
	*pInt = 100;

	// 주소의 단위
	// 1byte
	100;
	102; // 100 ~ 102 주소사이 2bytes 차이

	//int* 가 32비트일 때 4bytes 고 64비트일 때 8bytes이다. 
	int* pInt = nullptr; 
	char* pChar = nullptr;
	short* pShort = nullptr;
	int iSize = sizeof(pShort);

	// 배열의 특징
	// 1. 메모리가 연속적이다.
	// 2. 배열의 이름은 배열의 시작 주소이다.

	int iArr[10] = {};
	//int 단위로 접근
	//4bytes 씩 증가하여 주소를 변경 
	*(iArr + 0) = 10; // iArr[0] = 10 과 같다.
	*(iArr + 1) = 20; // iArr[1] = 20 과 같다.

	char cArr[2] = { 3 , 1 }; 
	// |--------------1BYTE-----------| |------------1BTYE---------------|     <----- Char 관점 : 3 , 1
	// [0] [0] [0] [0] [0] [0] [0] [1] ~ [0] [0] [0] [0] [0] [0] [1] [1] 
	// |-------------------------------2BYTE-----------------------------|    <------ Short 관점 : 259 (256 + 3)

	short* pS = (short*)cArr;
	printf("The value of iData is : %d\n", *pS);

}