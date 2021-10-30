#pragma once
//가변배열 만들기 위해서 3가지 변수가 필요함
//int 
typedef struct _tabArr
{
	int* pInt;
	int iCount;
	int iMaxCount;



}tArr;
//배열 초기화 함수
// 단축키 ctrl, '+', '.'
void InitArr(tArr* _pArr);

//배열 메모리 해체 함수
void ReleaseArr(tArr* _pArr);

//데이터 추가 함수
void PushBack(tArr* _pArr, int _iData);

void Reallocate(tArr* _pArr);

void Sort(tArr* _pArr, void(*_pFunc)(int* , int));