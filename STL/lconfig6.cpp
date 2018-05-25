
//file:lconfig6.cpp
//test _STL_FUNCTION_TMPL_PARTIAL_ORDER in <st1_config.h>
//vc6[x] cb4[o] gcc[o]


#include<iostream>
using namespace std;

class alloc{};

template<class T,class Alloc=alloc>
class vector
{
public:
	void swap(vector<T,Alloc>&){cout<<"swap()"<<endl;}
};

#ifdef _STL_FUNCTION_TMPL_PARTIAL_ORDER //ֻΪ˵�����Ǳ���������
template<class T��class Alloc>
inline void swap(vector<T,Alloc>& x,vector<T,Alloc>& y){x.swap(y);}
#endif //ֻΪ˵�����Ǳ���������

//���Ͻ�¼��stl_vector.h,��ɫ����ϵԴ�����е��������룬�Ǳ����Գ�������

int main()
{  
	vector<int>x,y;
	swap(x,y);				//sawp()
	return 0;
} 

