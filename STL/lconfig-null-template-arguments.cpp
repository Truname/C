
//file:lconfig-nulltemplate-arguments.cpp
//test _STL_NULL_TMPL_ARGS in <st1_config.h>
//ref. C++ Primer 3/e,p.834:bound friend function template
//vc6[o] cb4[o] gcc[o]


#include<iostream>
#include<cstddef>                 //for size_t
using namespace std;

class alloc{};

template<class T, class Alloc = alloc, size_t BufSiz = 0>
class deque
{
public:
	deque(){cout<<"deque"<<' ';}
};

//以下声明如果不出现，GCC也可以通过，如果出现，GCC也可以通过。这一点和
//C++ Primer 3/e p.834 的说法有出入。书上说一定要有这些前置声明

/*
template<class T,class Sequence>
class stack;

template<class T,class Sequence>
bool operator==(const stack<T,Sequence>& x,
				const stack<T,Sequence>& y);
*/

template <class T,class Sequence = deque<T>>
class stack
{
	//写成这样是可以的
	friend bool operator== <T>(const stack<T>&, const stack<T>&);
	friend bool operator<  <T>(const stack<T>&, const stack<T>&);
	//写成这样也是可以的
	friend bool operator==<T>(const stack&, const stack&);
	friend bool operator< <T>(const stack&, const stack&);
	//写成这样也是可以的
	friend bool operator==<>(const stack&, const stack&);
	friend bool operator< <>(const stack&, const stack&);
	//写成这样就不可以
	//friend bool operator==(const stack&, const stack&);
	//friend bool operator< (const stack&, const stack&);

public:
	stack(){cout<<"stack"<<endl;}
private:
	Sequence c;
};

template<class T, class Sequence>
bool operator==(const stack<T, Sequence>&x,
				const stack<T, Sequence>&y)
{return cout<<"operator=="<<'\t';}

template<class T,class Sequence>
bool operator< (const stack<T,Sequence>&x,
				const stack<T,Sequence>&y)
{return cout<<"operator<"<<'\t';}

int main()
{	stack<int> x;                        //deque stack
	stack<int> y;						 //deque stack

	cout<<(x == y)<<endl;                //operator== 1
	cout<<(x<y)<<endl;					 //operator<  1

	stack<char>y1;                       //deque stack
	//cout<<(x == y1)<<endl;             //error:no match for ...
	//cout<<(x <  y1)<<endl;             //error:no match for ...

	return 0;	
} 

