/*Pointers tutorials*/
#include <iostream>
using namespace std;

#ifndef deb
#define deb(x) cout<<#x<<" : "<<x<<endl;
#endif

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r",stdin);
		freopen("output.txt", "w",stdout);
	#endif
	int a = 10;
	int *ptr;
	ptr = &a;
	deb(a);
	deb(ptr);
	deb(&a);
	deb(&ptr);
	deb(*ptr);

	//pointer arithematic ++, --, +, -
	deb(endl);
	ptr++;
	deb(ptr);
	deb(*ptr);

	// array as pointers
	int arr[] = {10, 20, 30,40};
	deb(*arr);

	int *ptrr = arr;
	for (int i = 0; i < 4; ++i)
		{
			deb(*ptrr);
			ptrr++;
		}	

	for (int i = 0; i < 4; ++i)
	{
		// note that arr is an indexing pointer not an intger pointer so when we add 1 the index is beeing changed 
		deb(*(arr+i)); // arr++; is illegal 
	}

	deb(endl);
	//pointer to pointer

	int x = 20;
	int *p;
	p = &a;
	deb(*p);

	int **q=&p;
	deb(*q);
	deb(&a);
	deb(p);		
	deb(**q);


	return 0;
}