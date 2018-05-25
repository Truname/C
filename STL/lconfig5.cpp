
//file:lconfig5.cpp
//测试在class template partial specialization——在class template 
//一般化设计之外，特别针对某些template参数做特殊设计
//test _STL_CLASS_PARTIAL_SPECIALIZATION in <st1_config.h>
//ref.c++ Primer 3/e, p.860
//vc6[x] cb4[o] gcc[o]


#include<iostream>
using namespace std;

//一般化设计
template<class I,class O>
struct testClass
{
	testClass(){cout<<"I,O"<<endl;}
};

//特殊化设计
template<class T>
struct testClass<T*, T*>
{
	testClass(){cout<<"T*,T*"<<endl;}
};

//特殊化设计
template<class T>
struct testClass<const T*,T*>
{
	testClass(){cout<<"const T*，T*"<<endl;}
};

int main()
{  
	testClass<int,char>obj1;			//I,O
	testClass<int*,int*>obj2;			//T*,T*
	testClass<const int*,int*>obj3;		//const T*,T* 
	return 0;
} 

