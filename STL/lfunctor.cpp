
//file:lfunctor.cpp

#include<iostream>
using namespace std;

//由于将operator()重载了，因此plus成了一个仿函数
template<class T>
struct plus
{
	T operator()(const T&x,const T&y)const{return x+y;}
};

//由于将operator()重载了，因此minus成了一个仿函数
template<class T>
struct minus
{
	T operator()(const T&x,const T&y)const{return x-y;}
};

int main()
{
	//以下产生仿函数对象
	plus<int>plusobj;
	minus<int>minusobj;
	
	//以下使用仿函数，像使用一般函数一样
	cout<<plusobj(3,5)<<endl;         //8
	cout<<minusobj(3,5)<<endl;        //-2
	
	//以下直接产生仿函数的临时对象（第一对小括号），并调用之（第二对小括号）
	cout<<plus<int>()(43,45)<<endl;    //88
	cout<<minus<int>()(43,45)<<endl;   //-2

	return 0;
} 








