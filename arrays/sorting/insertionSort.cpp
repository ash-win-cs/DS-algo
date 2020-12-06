
/*	Question - Insertion sort
*/

#include<iostream>
using namespace std;

void printArr(int n, int array[]){
	for(int i=0; i<n; i++){
		cout << array[i]<<", ";
	}
	cout << endl;
}

void insertionSort(int n, int array[]){
	
	for (int i = 1; i < n; ++i)
	{
		int current = array[i];
		int j = i-1;
		while(array[j]>current && j>=0){
			array[j+1] = array[j];
			j--;
		}
		array[j+1] = current;
	}
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

	cout << "UnSorted: "<<endl;
	printArr(n, array);	

	insertionSort(n, array);
	
	cout << "Sorted: "<<endl;
	printArr(n, array);	

	return(0);
}