#include<stdio.h>

int Factorial(int _Num)
{
	int iValue = 1;
	for (int j = 0; j < _Num - 1; ++j)
	{
		iValue *= (j + 1);
	}
	return iValue;
}

int Factorial_Re(int _Num)
{
	if (1 == _Num)
	{
		return 1;
	}
	return _Num * Factorial_Re(_Num - 1);

}
// 1 1 2 3 5 8 13 21 34 55
int Fibonacci(int _Num)
{
	int Value1 = 1;
	int Value2 = 1;
	int ResultValue = 0;
	if (1 == _Num || 2 == _Num)
	{
		return 1;
	}
	for (int i = 0; i < _Num - 2; ++i)
	{
		ResultValue = Value1 + Value2;
		Value1 = Value2;
		Value2 = ResultValue;
	}
	return ResultValue;
}

int Fibonacci_Re(int _Num)
{

	if (1 == _Num || 2 == _Num)
	{
		return 1;
	}
	
	return Fibonacci_Re(_Num - 1) + Fibonacci_Re(_Num - 2);
}

int main()
{
	int i = 10;
	int Value = Factorial(i);
	Value = Factorial(3);
	Value = Factorial(4);
	Value = Factorial(10);
	Value = Factorial_Re(10);
	Value = Fibonacci(10);
	Value = Fibonacci_Re(10);
	return 0;
}