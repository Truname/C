
//file:lconfig-temporary-object.cpp
//�������Էº�������for_each()������
//vc6[o] cb4[x] gcc[o]

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

template<typename T>
class print
{
public:
	void operator()(const T& elem) //operator()����.��1.9.6��
	{cout<<elem<<' ';}
};

int main()
{
	int ia[6] = { 0,1,2,3,4,5};
	vector<int>iv(ia,ia+6);

	//print<int>()��һ����ʱ���󣬲���һ���������ò���
	for_each(iv.begin(),iv.end(),print<int>());
	return 0;	
} 






