// write a prgm to find unique number in an array where all number except 
// one are present thrice
#include <iostream>
using namespace std;

int setBit(int n, int pos) {
	return((n | (1<<pos)));
}

bool getBit(int n, int pos) { //returns if there is a set bit at that position
	return((n & (1<<pos))!=0);
}

void unique(int arr[], int n) {
	int result = 0;
	for (int i = 0; i < 64; ++i)
	{
		int sum = 0;
		for (int j = 0; j < n; ++j)
		{
			if (getBit(arr[j], i))
			{
				sum++;
			}
		}
		if (sum%3 != 0)		
		{
			result = setBit(result, i);
		}
	}
	cout << result << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r",stdin);
		freopen("output.txt", "w",stdout);
	#endif

	/*
	{1,3,2,3,4,2,1,1,3,2} //unique 4
	

	*/
	int arr[] = {1,3,2,3,4,2,1,1,3,2};
	unique(arr, 10);
	return(0);
}