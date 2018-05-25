
//file:lconfig-exp-template-special.cpp
//以下测试class template explicit specialization
//test _STL_TEMPLATE_NULL in <st1_config.h>
//ref. C++ Primer 3/e,p.858
//vc6[o] cb4[x] gcc[o]
//vs2012 编译不通过

#include<iostream>
using namespace std;

//将 _STL_TEMPLATE_NULL 定义为template<>,可以 
//若定义为blank，如下，则只适用于GCC

#define _STL_TEMPLATE_NULL  /*blank*/

template<class Key>struct hash
{
	void operator()(){cout<<"hash<T>"<<endl;}
};

//explicit specialization
_STL_TEMPLATE_NULL struct hash<char>
{
	void operator()(){cout<<"hash<char>"<<endl;}
};

_STL_TEMPLATE_NULL struct hash<unsigned char>
{
	void operator()(){cout<<"hash<unsigned char>"<<endl;}
};

int main()
{
	hash<long> t1;
	hash<char> t2;
	hash<unsigned char> t3;

	t1();	//hash<T>
	t2();   //hash<char>
	t3();   //hash<unsigned char>
	return 0;	
} 






