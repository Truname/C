
//file:lconfig-exp-template-special.cpp
//���²���class template explicit specialization
//test _STL_TEMPLATE_NULL in <st1_config.h>
//ref. C++ Primer 3/e,p.858
//vc6[o] cb4[x] gcc[o]
//vs2012 ���벻ͨ��

#include<iostream>
using namespace std;

//�� _STL_TEMPLATE_NULL ����Ϊtemplate<>,���� 
//������Ϊblank�����£���ֻ������GCC

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






