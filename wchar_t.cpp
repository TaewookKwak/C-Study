#include <stdio.h>

int StrLength(const wchar_t* _target)
{
	int i = 0;
	while (true)
	{
		if ('\0' == *(_target + i))
		{
			break;
		}
		i++;
	}
	return i;
}

signed int StrMatChek(const wchar_t* lStr, const wchar_t* rStr)
{
	signed int result;
	// 첫번째 문자들 비교- 왼쪽이 먼저면 -1 리턴, 오른족이 먼저면 1 리턴
	for (int i = 0; lStr[i] != '\0' && rStr[i] != '\0'; i++)
	{
		if (*(lStr + i) < *(rStr + i))
		{
			return -1;
		}
		else if (*(lStr + i) > *(rStr + i))
		{
			return 1;
		}
	}
	// 동일하면, 두번째 문자들 비교- **
	// null 문자가 나올때 까지 비교- **
	// 모든 문자가 동일하면 0 리턴
	return 0;
}

int StrCmp(const wchar_t* _left, const wchar_t* _right)
{
	int iLeftLength = StrLength(_left);
	int iRightLength = StrLength(_right);
	int iLoop = 0;
	int iReturn = 0;

	if (iLeftLength < iRightLength)
	{
		iLoop = iLeftLength;
		iReturn = -1;
	}
	else if (iLeftLength > iRightLength)
	{
		iLoop = iRightLength;
		iReturn = 1;
	}
	else
	{
		iLoop = iLeftLength;
	}

	for (int i = 0; i < iLoop; i++)
	{
		if (_left[i] < _right[i])
			return -1;
		else if(_right[i] < _left[i])
			return 1;

	}
	return iReturn;
	

}

int main()
{
	int iResult = StrMatChek(L"abcd", L"abdc");
	int iResult2 = StrCmp(L"abc", L"abc");
	return 0;
}