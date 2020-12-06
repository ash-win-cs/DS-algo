
/*	Question - Linear search of array
       .
*/

#include<iostream>
using namespace std;

int linearSearch(int n, int* array, int key){
	for (int i = 0; i < n; ++i)
	{
		if(array[i]==key)
			return(i+1);
	}
	return(-1);
}

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r",stdin);
		freopen("output.txt", "w",stdout);
	#endif

	int array[10];
	int n;
	cin >> n;

	for(int i=0; i<n; i++){
		cin >> array[i];
	}

	int key;
	cin >> key;
	cout << endl << "Search Results : "<< linearSearch(n, array, key);
	return(0);
}