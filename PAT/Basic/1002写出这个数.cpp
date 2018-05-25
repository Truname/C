#include<iostream>
#include<string>
using namespace std;

int main(){
	char n[101];
	cin>>n;
	int i1,i2,i3,sum=0,i=0;
	while(n[i]!='\0'){
		sum+=n[i]-'0';
		++i;
	}
string a[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
i1=sum%10;
i2=(sum/10)%10;
i3=(sum/100)%10;
if (i3==0&&i2!=0)
{cout<<a[i2]<<" "<<a[i1];}
else if(i3==0&&i2==0)
{cout<<a[i1];}
else
{cout<<a[i3]<<" "<<a[i2]<<" "<<a[i1];}
return 0;
}