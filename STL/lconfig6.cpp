
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

#ifdef _STL_FUNCTION_TMPL_PARTIAL_ORDER //只为说明，非本程序内容
template<class T，class Alloc>
inline void swap(vector<T,Alloc>& x,vector<T,Alloc>& y){x.swap(y);}
#endif //只为说明，非本程序内容

//以上节录自stl_vector.h,灰色部分系源代码中的条件编译，非本测试程序内容

int main()
{  
	vector<int>x,y;
	swap(x,y);				//sawp()
	return 0;
} 

