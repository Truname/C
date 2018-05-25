
//file:lconfig-temporary-object.cpp
//本例测试仿函数用于for_each()的情形
//vc6[x] cb4[o] gcc[o]

#include<iostream>
using namespace std;

template<typename T>
class testClass
{
public:			//expedient
	static const int _datai =5;
	static const long _datal = 3L;
	static const char _datac ='c';

};

int main()
{
	cout<<testClass<int>::_datai<<endl;	//5
	cout<<testClass<int>::_datal<<endl;	//3
	cout<<testClass<int>::_datac<<endl;	//c
	return 0;	
} 






