#include <stdio.h>

// 구조체 : 사용자 정의 자료형
typedef struct Mystruct // struct 라는 자료형을 Mystruct 로 바꿈
{
	int a;
	float f;
}MYST; // <<자료형이 된다.

int main()
{
	MYST t = {}; // 총 8Bytes (int(4) + float(4)
	int iSize = sizeof(MYST);
	
	t.a = 10;
	t.f = 10.212f;

	//구조체와 포인터
	MYST* pSt = &t;
	(*pSt).a = 100;// 같은 말
	pSt->a = 200;  // 같은 말

	(*pSt).f = 3.14f;
	pSt->f = 3.24f;
	return 0;

}