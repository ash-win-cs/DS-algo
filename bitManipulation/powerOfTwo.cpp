// prgm to check if a number is power of 2
#include<iostream>
using namespace std;


int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r",stdin);
		freopen("output.txt", "w",stdout);
	#endif
 	
		/*
		Patterns in bitmanipulation
		n = 6 	= 	0110 flip rightmost set it 01`1`0 and the remaining bits to get n-1
		n-1 = 5 = 	0101
		n = 8 	= 	1000
		n-1 = 7	= 	0111
		(n & n-1) has same bits as n except the right most set bit
		i.e. here (n & n-1) = 01`0`0 this has all the bits same as n except for rightmost set bit

		so, 
		n & n-1 = we get that set bit
		0110 & 0101 = 0100

		2 = 0010
		4 = 0100
		8 = 1000
		so for the powers of 2 only 1 bit is set
		n-1 = all the bits set to 1 except for the set bit of n

		so (n & n-1) will always will be zero

		Note : there is a corner case in this when u have n = 0
		then n-1 is also zero,
		so we AND it with n so in any case the where n=0 will be zero
		*/

		int n;
		cin >> n;
		cout << (n && !(n & n-1)? "True" : "False") << endl;

    return(0);
}