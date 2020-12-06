/*
	Subarray : continuos part of the array - nC2+n
	Subsequence : Derived from array, without changing the order of the arra - 2^n

	Question : Sum of subarrays
*/

#include<iostream>
using namespace std;


int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r",stdin);
		freopen("output.txt", "w",stdout);
	#endif
    
    int n;
    cin >>n;
    int arr[10];

    for (int i = 0; i < n; ++i)
    {
    	cin>>arr[i];
    }

    int current = 0;
    for (int i = 0; i < n; ++i)
    {
    	current = 0;
    	for (int j = i; j < n; ++j)
    	{
    		current += arr[j];
    		cout << current << endl;
    	}
    }


    return(0);
}