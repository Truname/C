#include<vector> //which included <stl_algobase.h>
				//and then<stl_config,h>

#include<iostream>
using namespace std;

int main()
{
# if defined(_sgi)
	cout<<"_sgi"<<endl;		//none!
# endif

# if defined(_GNUC_)
	cout<<"_GNUC_"<<endl;   //_GNUC_
	cout<<_GNUC_<<' '<<_GNUC_MINOR_<<endl;
	// cout<<_GLTBC_<<endl;
	// _GLTBC_ undeclared
#endif

// case 2
#ifdef _STL_NO_DRAND48
	cout<<"_STL_NO_DRAND48 defined"<<endl;
#else
	cout<<"_STL_NO_DRAND48 undefined"<<endl;
#endif

// case 3
#ifdef _STL_STATIC_TAMPLATE_MEMBER_BUG
	cout<<" _STL_STATIC_TAMPLATE_MEMBER_BUG defined"<<endl;
#else
	cout<<"_STL_STATIC_TAMPLATE_MEMBER_BUG undefined"<<endl;
#endif

// case 5
#ifdef _STL_CLASS_PARTIAL_SPECIALIZATION
	cout<<"_STL_CLASS_PARTIAL_SPECIALIZATION defined"<<endl;
#else
	cout<<"_STL_CLASS_PARTIAL_SPECIALIZATION undfined"<<endl;
#endif

return 0;

}



















