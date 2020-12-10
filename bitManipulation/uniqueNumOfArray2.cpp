//write a pgm to find unique number in an array where except 
//one number will be repeatig and all other numbers will be only once
#include <iostream>
using namespace std;

bool ifsetBit(int n, int pos) { //returns if there is a set bit at that position
	return((n & (1<<pos))!=0);
}

void unique(int arr[], int n) {
	int xorSum = 0;
	for (int i = 0; i < n; ++i)
	{
		xorSum = xorSum^arr[i];
	}
	// now xorSum will xor of 7 & 5
	// next step we need to find rightmost position of set bit 
	int setBit = 0;
	int pos = 0;
	int tempXor = xorSum;
	while(setBit != 1){
		setBit = xorSum & 1; //setBit becomes one if LSB bit of number is one
		pos++; // update pos
		xorSum = xorSum >> 1; //right shift xor
	}
	int newXor = 0;
	for (int i = 0; i < n; ++i)
	{
		if (ifsetBit(arr[i], pos-1))
		{
			newXor = newXor ^ arr[i];
		}
	}
	// now newxor will be holding one of the unique number

	cout << newXor << endl;
	cout << (tempXor^newXor) << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r",stdin);
		freopen("output.txt", "w",stdout);
	#endif

	/*
	{2,4,6,7,4,5,2} //unique 5, 7
	using XOR operator
	XOR gives op only when both bits are diff
	0 ^ 0 = 0
	0 ^ 1 = 1
	1 ^ 0 = 1
	1 ^ 1 = 0
	XOR with same number will always be zero
	duplicate numbers will become zero and unque number will remain
	
	here we will take xor of all numbers and finally get
	7^5 = 
	 0111
	^0101
	=0010
	so there will be only one unique number (out of the 2 unique) where 
	2nd pos is one, hence we will XOR all numbers having 2nd pos 1
	and which wil cause all duplicate numbers to go and we will get a 
	1st unique number then we can XOR it with other one to get 2nd unique 
	number

	*/
	int arr[] = {1,2,3,1,2,3,5,7};
	unique(arr, 8);
	return(0);
}