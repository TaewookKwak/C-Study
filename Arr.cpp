#include "Arr.h"
#include<iostream>

void InitArr(tArr* _pArr)
{
	_pArr->pInt = (int*)malloc(sizeof(int) * 2);
	_pArr->iCount = 0;
	_pArr->iMaxCount = 2;
}

void ReleaseArr(tArr* _pArr)
{
	free(_pArr->pInt);
	_pArr->iCount = 0;
	_pArr->iMaxCount = 0;
}

void PushBack(tArr* _pArr, int _iData)
{
	//힙 영역에 할당한 공간이 다참
	if (_pArr->iMaxCount <= _pArr->iCount)
	{
		//재할당
		Reallocate(_pArr);
	}
	// Data를 다음 인덱스의 pINT에 저장함
	_pArr->pInt[_pArr->iCount++] = _iData;
}

void Reallocate(tArr* _pArr)
{
	//1. 2배가 더 큰 공간을 동적할당한다.
	int* pNew = (int*)malloc(_pArr->iMaxCount * 2 * sizeof(int));
	
	//2. 이사갈때 기존 공간에 있던 데이터들을 새로 할당한 곳에 옴겨준다.(복사)
	for (int i = 0; i < _pArr->iCount; i++)
	{
		pNew[i] = _pArr->pInt[i];
	}
	//3. 기존 공간은 메모리 해제
	free(_pArr->pInt);
	//4. 배열이 새로 할당된 공간을 가리키게 한다.
	_pArr->pInt = pNew;
	//4. maxcount 변경점 적용
	_pArr->iMaxCount *= 2;
}

void Sort(tArr* _pArr, void(*_pFunc)(int*, int))
{
	_pFunc(_pArr->pInt, _pArr->iCount);

	/*if (_pArr->iCount <= 1)
		return;
	while (true)
	{
		bool bFinish = true;
		int iLoop = _pArr->iCount - 1;
		for (int i = 0; i < iLoop; ++i)
		{
			if (_pArr->pInt[i] > _pArr->pInt[i + 1])
			{
				int iTemp = _pArr->pInt[i];
				_pArr->pInt[i] = _pArr->pInt[i + 1];
				_pArr->pInt[i + 1] = iTemp;

				bFinish = false;
			}
		}
		
		if (bFinish)
			break;
	}*/

}

