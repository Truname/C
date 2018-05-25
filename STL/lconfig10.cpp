
//file:lconfig10.cpp
//测试template参数可否根据前一个template参数而设定默认值
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

//根据前一个参数值T，设定下一个参数值Sequence的默认值为deque<T>
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

