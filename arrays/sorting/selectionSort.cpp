
/*	Question - Selection sort
  	find the min element and swap it with beginnging element      .
*/

#include<iostream>
using namespace std;

void printArr(int n, int array[]){
	for(int i=0; i<n; i++){
		cout << array[i]<<", ";
	}
	cout << endl;
}

void Selectionsort(int n, int array[]){
	
	for (int i = 0; i < n-1; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if (array[j] < array[i])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
			// printArr(n, array);
		}
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

	Selectionsort(n, array);
	
	cout << "Sorted: "<<endl;
	printArr(n, array);	

	return(0);
}