
//file:lfunctor.cpp

#include<iostream>
using namespace std;

//���ڽ�operator()�����ˣ����plus����һ���º���
template<class T>
struct plus
{
	T operator()(const T&x,const T&y)const{return x+y;}
};

//���ڽ�operator()�����ˣ����minus����һ���º���
template<class T>
struct minus
{
	T operator()(const T&x,const T&y)const{return x-y;}
};

int main()
{
	//���²����º�������
	plus<int>plusobj;
	minus<int>minusobj;
	
	//����ʹ�÷º�������ʹ��һ�㺯��һ��
	cout<<plusobj(3,5)<<endl;         //8
	cout<<minusobj(3,5)<<endl;        //-2
	
	//����ֱ�Ӳ����º�������ʱ���󣨵�һ��С���ţ���������֮���ڶ���С���ţ�
	cout<<plus<int>()(43,45)<<endl;    //88
	cout<<minus<int>()(43,45)<<endl;   //-2

	return 0;
} 








