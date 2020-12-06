
/*	Question - Bubble sort
n-1 iterations to get sorted array
*/

#include<iostream>
using namespace std;

void printArr(int n, int array[]){
	for(int i=0; i<n; i++){
		cout << array[i]<<", ";
	}
	cout << endl;
}

void bubbleSort(int n, int array[]){
	
	int counter = 1;
	while(counter<n){
		for (int i = 0; i < n-counter; ++i){
			if(array[i] > array[i+1]){
				int temp = array[i];
				array[i] = array[i+1];
				array[i+1] = temp;
			}
			// printArr(n, array);	
		}
		counter++;	
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

	bubbleSort(n, array);
	
	cout << "Sorted: "<<endl;
	printArr(n, array);	

	return(0);
}