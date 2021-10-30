#include <stdio.h>

int main()
{
	// 배열은 연속적인 메모리 구조
	int iArray[10] = { }; //10ea variable
	iArray[9] = 10;

	// 구조체 : 사용자 정의 자료형
	typedef struct Mystruct
	{
		int a;
		float f;
	}MYST; // <<자료형이 된다.

	return 0;
	
}