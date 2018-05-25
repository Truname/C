#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int n,cout_p,cout_a,cout_t,pos_p,pos_t;
	char a[101];
	int b[100];
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a;
		cout_p=cout_a=cout_t=pos_p=pos_t=0;
		int c=strlen(a);
		for(int j=0;j<c;++j)
		{
			if(a[j]=='A')
				cout_a++;
			if(a[j]=='P'){
				cout_p++;
				pos_p=j;
			}	
			if(a[j]=='T'){
				cout_t++;
				pos_t=j;
			}
		}
		
		if(cout_a+cout_p+cout_t!=strlen(a) || cout_p>1 ||cout_t>1 || pos_p+1>=pos_t || pos_p*(pos_t-pos_p-1)!=strlen(a)-pos_t-1)
			b[i]=0;
		else b[i]=1;
	}
	for(int i=0;i<n;++i){
		if(b[i]==0) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}