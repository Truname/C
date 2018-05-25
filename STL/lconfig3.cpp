
//file:lconfig3.cpp
//������class template��ӵ��static data members.
//test_STL_STATIC_TEMPLATE_MEMBER_BUG,defind in<stl_config.h>
//ref.c++ Primer 3/e, p.839
//vc6[o] cb4[x] gcc[o]
//cb4 does not support static data member initialization.

#include<iostream>
using namespace std;

template <typename T>
class testClass
{
public:                //����Ϊ�˷�����ԣ�ʹ��public
	static int _data;
};

//Ϊstatic data members ���ж��壨�����ڴ棩�������ֵ

int testClass<int>::_data =1;
int testClass<char>::_data =2;


int main()
{  //���£�CB4���ֲ��ѣ�û�н��ܳ�ֵ�趨
   cout<<testClass<int>::_data<<endl;//GCC,VC6:1 CB4:0
   cout<<testClass<char>::_data<<endl;//GCC,VC6:2 CB4:0

   testClass<int> obji1,obji2;
   testClass<char>objc1,objc2;

   cout<<obji1._data<<endl;//GCC,VC6:1 CB4:0
   cout<<obji2._data<<endl;//GCC,VC6:1 CB4:0
   cout<<objc1._data<<endl;//GCC,VC6:2 CB4:0
   cout<<objc2._data<<endl;//GCC,VC6:2 CB4:0

   obji1._data=3;
   objc2._data=4;

   cout<<obji1._data<<endl;//GCC,VC6:3 CB4:3
   cout<<obji2._data<<endl;//GCC,VC6:3 CB4:3
   cout<<objc2._data<<endl;//GCC,VC6:4 CB4:4
   cout<<objc2._data<<endl;//GCC,VC6:4 CB4:4

	return 0;
} 

