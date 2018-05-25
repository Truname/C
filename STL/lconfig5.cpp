
//file:lconfig5.cpp
//������class template partial specialization������class template 
//һ�㻯���֮�⣬�ر����ĳЩtemplate�������������
//test _STL_CLASS_PARTIAL_SPECIALIZATION in <st1_config.h>
//ref.c++ Primer 3/e, p.860
//vc6[x] cb4[o] gcc[o]


#include<iostream>
using namespace std;

//һ�㻯���
template<class I,class O>
struct testClass
{
	testClass(){cout<<"I,O"<<endl;}
};

//���⻯���
template<class T>
struct testClass<T*, T*>
{
	testClass(){cout<<"T*,T*"<<endl;}
};

//���⻯���
template<class T>
struct testClass<const T*,T*>
{
	testClass(){cout<<"const T*��T*"<<endl;}
};

int main()
{  
	testClass<int,char>obj1;			//I,O
	testClass<int*,int*>obj2;			//T*,T*
	testClass<const int*,int*>obj3;		//const T*,T* 
	return 0;
} 

