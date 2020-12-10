// prgm to generate all posible subsets 
#include<iostream>
using namespace std;


void subsets(int arr[], int n) {
	for (int i = 0; i < (1<<n); ++i)// o to 2^n
	{
		for (int j = 0; j < n; ++j)
		{
			//check if for ith number its jth bit is set or not
			if(i & (1<<j)){ 	// getbit func
				cout<<arr[j]<<" ";
			}
		}
		cout<<endl;
	}
}
int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r",stdin);
		freopen("output.txt", "w",stdout);
	#endif

	/*
	no of subsets of n = 2^(n-1)
	{a,b,c}		abc
	{}			000
	{c}			001
	{b}			010
	{b,c}		011
	{a}			100
	{a,c}		101
	{a,b}		110
	{a,b,c}		111
	*/
	int arr[4] = {1,2,3,4};
	subsets(arr, 4);
    return(0);
}