#include <iostream>
#include "Arr.h"
#include<time.h>
using namespace std;

void BubbleSort(int* _pData, int _iCount)
{
	if (_iCount <= 1)
		return;
	while (true)
	{
		bool bFinish = true;
		int iLoop = _iCount - 1;
		for (int i = 0; i < iLoop; ++i)
		{
			if (_pData[i] > _pData[i + 1])
			{
				int iTemp = _pData[i];
				_pData[i] = _pData[i + 1];
				_pData[i + 1] = iTemp;

				bFinish = false;
			}
		}

		if (bFinish)
			break;
	}

}

int main()
{

	int iArr[10] = { 3,2,1,4,6,8,12,25,455 };
	BubbleSort(iArr, 10);

	//가변 배열
	//힙 메모리를 써야함

	int a = 100;
	// int arr[a] = {}; //안되는 이유는 코드에서 결정이 되어야 하기 때문에
	
	//객체(instance)
	// int,
	// int a;
	
	tArr s = {};
	InitArr(&s);
	//난수(랜덤)
	//srand(time(nullptr)); //상위 버전
	//rand(); // 하위 버전
	for (int i = 0; i < 10; i++)
	{
		int iRand = rand() % 100 + 1; // 1~100;
		PushBack(&s, iRand);
	}
	cout << "\nBefore\n";
	for (int i = 0; i < s.iCount; i++)
	{
		std::cout << s.pInt[i] << std::endl;
	}
	cout << "\nAfter\n";

	Sort(&s, &BubbleSort); // 함수는 이름자체가 주소를 나타내기 때문에 그냥 BubbleSort라고 해도됨
	for (int i = 0; i < s.iCount; ++i)
	{
		std::cout << s.pInt[i] << std::endl;
	}


	Reallocate(&s);

	ReleaseArr(&s);


	return 0;
}