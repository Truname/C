
//file:lconfig8.cpp
//测试class template之内可否再有template(members)
//test _STL_MEMBER_TMPLATES in <st1_config.h>
//ref. C++ Primer 3/e,p.844
//vc6[o] cb4[o] gcc[o]


#include<iostream>
using namespace std;

class alloc{};

template<class T,class Alloc=alloc>
class vector
{
public:
	typedef T value_type;
	typedef value_type* iterator;

	template<class I>
	void insert(iterator position,I first,I last){cout<<"insert()"<<endl;}
};



int main()
{  
	int ia[5]={0,1,2,3,4};

	vector<int>x;
	vector<int>::iterator ite=0;
	x.insert(ite,ia,ia+5);       //insert()
	return 0;
} 

