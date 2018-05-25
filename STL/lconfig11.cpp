
//file:lconfig11.cpp
//测试class template可拥有non-type template参数
//test _STL_NON_TYPE_TMPL_PARAM_BUG in <st1_config.h>
//ref. C++ Primer 3/e,p.825
//vc6[o] cb4[o] gcc[o]


#include<iostream>
#include<cstddef>                 //for size_t
using namespace std;

class alloc{};

inline size_t _deque_buf_size(size_t n,size_t sz)
{return n!= 0 ? n:(sz<512 ? size_t(512/sz):size_t(1));}

template<class	T,class Ref,class Ptr,size_t BufSiz>
struct _deque_iterator
{
	typedef _deque_iterator<T, T&, T*,BufSiz> iterator;
	typedef _deque_iterator<T, const T&, const T*,BufSiz> const _iterator;
	static size_t buffer_size(){return _deque_buf_size(BufSiz,sizeof(T));}
};

template<class T,class Alloc = alloc,size_t BufSiz =0>
class deque
{
public:              //Iterators
	typedef _deque_iterator<T, T&, T*, BufSiz> iterator;
};

int main()
{	cout<<deque<int>::iterator::buffer_size()<<endl;				//128
	cout<<deque<int,alloc,64>::iterator::buffer_size()<<endl;		//64
	return 0;	
} 

