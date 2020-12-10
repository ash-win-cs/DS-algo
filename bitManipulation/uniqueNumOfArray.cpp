//write a pgm to find unique number in an array where except 
//one number all other numbers will be repeatig
#include <iostream>
using namespace std;

int unique(int arr[], int n) {
	int xorSum = 0;
	for (int i = 0; i < n; ++i)
	{
		xorSum = xorSum^arr[i];
	}
	return(xorSum);
}
int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r",stdin);
		freopen("output.txt", "w",stdout);
	#endif

	/*
	{2,4,6,3,4,6,2}
	using XOR operator
	XOR gives op only when both bits are diff
	0 ^ 0 = 0
	0 ^ 1 = 1
	1 ^ 0 = 1
	1 ^ 1 = 0
	XOR with same number will always be zero
	duplicate numbers will become zero and unque number will remain
	*/
	int arr[7] = {1,2,3,11,3,2,1};
	cout << unique(arr, 7) << endl;
	return(0);
}