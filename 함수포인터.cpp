#include<iostream>
using namespace std;	
void Test()
{
	cout << "Taewook Kwak";
}

int main()
{
	void(*pFunc)(void) = nullptr; // 함수포인터 설정
	pFunc = Test; // 함수 포인터 연결
	pFunc(); //함수 포인터 사용

	return 0;

}