
/*	Question - Binary search of array
       .
*/

#include<iostream>
using namespace std;

int binarySearch(int n, int* array, int key){
	int begin = 0;
	int mid = n/2;
	int end = n;

	while(begin<=end){
		mid = (begin+end)/2; 
		if(array[mid] == key){
			return(mid);
		}
		else if ( array[mid] > key){
			end = mid-1;
		}
		else{
			begin = mid+1;
		}
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
	cout << endl << "Search Results : "<< binarySearch(n, array, key);
	return(0);
}