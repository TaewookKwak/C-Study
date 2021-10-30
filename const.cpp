#include<stdio.h>

void Output(const int* pi)
{
	//*pi = 100; 불가
}
int main()
{
	const int cint = 100; //  상수
	// cint = 10; 불가
	int* pInt = (int*)&cint;
	*pInt = 300;
	printf("Const value = %d\n", cint);

	int a = 0;
	int* pInt2 = &a;
	*pInt2 = 100;
	pInt2 = nullptr;
	// =============
	// const 포인터
	// =============
	const int* pContInt = &a;
	// *pContInt = 100; 오류, 가리키는 변수를 바꿀 수 없는 const 포인터
	int b = 0;
	pContInt = &b; // 하지만 대상을 바꿀수는 있다.


	// =============
	// 포인터 const
	// =============
	int* const pIntConst = &a;
	*pIntConst = 400;
	// pIntConst = &b; 불가능 주소값이 const 되서 안바뀜

	const int* const pConstIntConst = nullptr;

	// 초기화 시 가리킨 대상만 가리킴, 가리키는 원본을 수정 할 수 없음.
	a = 1100;
	Output(&a );
	return 0;
}