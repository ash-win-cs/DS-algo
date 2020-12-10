// prgm to find number of ones in   binary representation of a number
#include<iostream>
using namespace std;

void decToBinary(int n) 
{ 
    // array to store binary number 
    int binaryNum[32]; 
  
    // counter for binary array 
    int i = 0; 
    while (n > 0) { 
  
        // storing remainder in binary array 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
  
    // printing binary array in reverse order 
    for (int j = i - 1; j >= 0; j--) 
        cout << binaryNum[j]; 
    cout << endl;
} 

int noOfOnes(int n) {
	int count = 0;
	while(n) {
		// decToBinary(n);
		n = n & (n-1);
		++count;
	}
	return(count);
}

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r",stdin);
		freopen("output.txt", "w",stdout);
	#endif

	/*
	(n & n-1) gives same number except with right most set bit  changed
	so we can loop till the  everything becomes zero : exame
	n = 19 = 	10011  
	n-1 = 18 = 	10010
	n = n&n-1 = 10010 = 18
	
	n = 18 = 	10010
	n-1 = 17 = 	10001
	n = n&n-1 = 10000 = 16

	n = 16 	=	10000
	n-1 = 15 = 	01111
	n = n&n-1 = 00000

	so when n becomes zero we did 3 iterations so there are 3 set bits in 19
	*/
	int n;
	cin >> n;
	cout << noOfOnes(n) << endl;
    return(0);
}