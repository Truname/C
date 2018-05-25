
//file:lconfig-operator-overloading.cpp
//vc6[x] cb4[o] gcc[o]
//vc6 �� friend ���ƴ���C++ ��׼����⣬��bug

#include<iostream>
using namespace std;

class INT
{
	friend ostream& operator<<(ostream& os,const INT& i);
public:
	INT(int i) : m_i(i) { };

	//prefix : increment and then fetch
	INT& operator++()
	{
		++(this->m_i);  //����class�Ĳ�ͬ������Ӧ���в�ͬ�Ĳ���
		return *this;
	}

	//postfix : fetch and then increment
	const INT operator++(int)
	{
	INT temp = *this;
	++(*this);
	return temp;
	}

	//prefix : decrement and then fetch
	INT& operator--()
	{
		--(this->m_i); //����class�Ĳ�ͬ������Ӧ���в�ͬ�Ĳ���
		return *this;
	}

	//postfix : fetch and then decrement
	const INT operator--()
	{
	INT temp = *this;
	--(*this);
	return temp;
	}

	//dereference
	int& operator*() const
	{
	return (int&)m_i;
	//����ת���������߱���������ȷʵҪ��const intת��Ϊnon-const lvalue.
	//���û���������׵�ת�ͣ���Щ����������㾯�棬��Щ���ϸ�ı���������Ϊ����
	}

private:
	int m_i;
};

ostream& operator<<(ostream& os,const INT&i)
	{
	os<<'['<<i.m_i<<']';
	return os;
	}

int main()
{
	INT I(5);
	cout<<I++;		//[5]
	cout<<++I;		//[7]
	cout<<I--;		//[7]
	cout<<--I;		//[5]
	cout<< *I;		//5
	return 0;	
} 






