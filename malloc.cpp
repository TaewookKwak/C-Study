#include <iostream>

//변수
//지역은 스택


//메모리 영역
//스택
//데이터
//ROM
//힙 (동적할당)

int main()
{	
	//동적할당
	//1. 런타임 중에 대응 가능
	//2. 사용자가 직접 관리해야함(해제)


	//(int*) = 강제 케스팅
	int* pInt = (int*)malloc(100); //100바이트 메모리를 힙영역에 잡음, 그리고 주소를 포인터 변수에게 줌
	float* pFloat = (float*)malloc(4);
	*pFloat = 4.12f;


	int iInput = 0;
	scanf_s("%d", & iInput);
	int* pInt2 = nullptr;
	 
	if (100 == iInput)
	{
		pInt2 = (int*)malloc(100);
	}

	if (nullptr != pInt2)
	{
		free(pInt2);
	}

	return 0;
}