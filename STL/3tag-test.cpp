//file:3tag-test.cpp
//�������tag types�̳й�ϵ��������Ӱ��
#include<iostream>
using namespace std;

struct B{};							//B�ɱ���ΪInputIterator
struct D1:public B{};				//D1�ɱ���ΪForwardIterator
struct D2:public D1{};				//D2�ɱ���ΪBidirectionalIterator

template<class I>
void func(I& p,B)
{ cout<<"B version"<<endl; }

template<class I>
 void func(I& p,D2)
{ cout<<"D2 version"<<endl; }

int main()
{
int* p;
func(p,B());             //�����������ȫ�Ǻϡ����:"B version"
func(p,D1());            //���������δ����ȫ�Ǻϣ���̳й�ϵ���Զ����ݵ���
						 //�����"B version"
func(p,D2());            //�����������ȫ�Ǻϡ����:"D2 version"
return 0; 
}

