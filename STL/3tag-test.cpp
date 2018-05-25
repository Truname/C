//file:3tag-test.cpp
//仿真测试tag types继承关系所带来的影响
#include<iostream>
using namespace std;

struct B{};							//B可比拟为InputIterator
struct D1:public B{};				//D1可比拟为ForwardIterator
struct D2:public D1{};				//D2可比拟为BidirectionalIterator

template<class I>
void func(I& p,B)
{ cout<<"B version"<<endl; }

template<class I>
 void func(I& p,D2)
{ cout<<"D2 version"<<endl; }

int main()
{
int* p;
func(p,B());             //参数与参数完全吻合。输出:"B version"
func(p,D1());            //参数与参数未能完全吻合；因继承关系而自动传递调用
						 //输出："B version"
func(p,D2());            //参数与参数完全吻合。输出:"D2 version"
return 0; 
}

