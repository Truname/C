
//file:lconfig10.cpp
//����template�����ɷ����ǰһ��template�������趨Ĭ��ֵ
//test _STL_LIMITED_DEFAULT_TEMPLATES in <st1_config.h>
//ref. C++ Primer 3/e,p.816
//vc6[o] cb4[o] gcc[o]


#include<iostream>
#include<cstddef>
using namespace std;

class alloc{};

template<class T,class Alloc=alloc,size_t Bufsiz=0>
class deque
{
public:
	deque(){cout<<"deque"<<endl;}
};

//����ǰһ������ֵT���趨��һ������ֵSequence��Ĭ��ֵΪdeque<T>
template<class T,class Sequence = deque<T>>
class stack
{
public:
	stack(){cout<<"stack"<<endl;}
private:
	Sequence c;
};

int main()
{  
	stack<int> x; //deque
				  //stack
	return 0;
} 

