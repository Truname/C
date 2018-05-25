
//file:lconfig-temporary-object.cpp
//本例测试仿函数用于for_each()的情形
//vc6[o] cb4[x] gcc[o]

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

template<typename T>
class print
{
public:
	void operator()(const T& elem) //operator()重载.见1.9.6节
	{cout<<elem<<' ';}
};

int main()
{
	int ia[6] = { 0,1,2,3,4,5};
	vector<int>iv(ia,ia+6);

	//print<int>()是一个临时对象，不是一个函数调用操作
	for_each(iv.begin(),iv.end(),print<int>());
	return 0;	
} 






