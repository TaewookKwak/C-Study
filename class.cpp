#include<iostream>

class CMy
{
	//접근 제한 지정자
	// private, protected, public
private:
	int m_i;
	int m_t;
	
public:
	void SetInt(/*CMy* _this,*/ int i)
	{
		//this-> 의 원래 모습 과 메커니즘
		/*_this->*/m_i = i;
	}
	
	// 대입 연산자
	const CMy& operator =(const CMy& _Other)
	{
		m_i = _Other.m_i;
		m_t = _Other.m_t;
		return *this;
	}

	const CMy& operator +(const CMy& _Other)
	{
		m_i += _Other.m_i;
		m_t += _Other.m_t;
		return *this;
	}

public:
	//생성자
	//아나셜라이져(초기화)
	CMy()
		: m_i (0)
		, m_t (2)
	{

	}
	//소멸자
	~CMy()
	{

	}
};

int main()
{
	// C++ 클래스 특징
	// 접근제한 지정자
	// 클래스 내의 멤버변수 or 멤버함수 의 접근 레벨
	
	// 생성자 소멸자
	// 객체 생성, 소멸 시 자동으로 호출
	// 직접 만들지 않으면 디펄트 생성자, 소멸자 생성됨

	// 멤버 함수
	// 해당 클래스가 사용하는 전용함수
	// 해당 클래스의 객체가 필요함 ex) CMy c <-이것이 객체
	// 멤버 함수를 어떤 객체를 통해서 호출되면, 해당 객체의 주소가 this 포인터로 전달된다.
	CMy c;
	c.SetInt(5);
	

	return 0;
}