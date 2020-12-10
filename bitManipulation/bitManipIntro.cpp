/*

    The & (bitwise AND) in C or C++ takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1.
    The | (bitwise OR) in C or C++ takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1.
    The ^ (bitwise XOR) in C or C++ takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different.
    The << (left shift) in C or C++ takes two numbers, left shifts the bits of the first operand, the second operand decides the number of places to shift.
    The >> (right shift) in C or C++ takes two numbers, right shifts the bits of the first operand, the second operand decides the number of places to shift.
    The ~ (bitwise NOT) in C or C++ takes one number and inverts all bits of it

*/

#include <iostream>
using namespace std;


int getBit(int n, int pos) {
	return((n & (1<<pos)) != 0);
}

int setBit(int n, int pos) {
	return((n | (1<<pos)));
}

int clearBit(int n, int pos) {
	int mask = 1;
	mask =  ~(mask<<pos);
	return((n & mask));
}

int updateBit(int n, int pos, int val) {
	int mask = 1;
	mask =  ~(mask<<pos);
	n = n & mask; // clearBit

	return(n|(val<<pos));
}


int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r",stdin);
		freopen("output.txt", "w",stdout);
	#endif
    
    cout << (1<<8) << endl; // left shift binary operation'
    cout << (1024>>10) << endl; // right shift binary operation'
    cout << (~ 7); // to take complement

    // #1 : to get bit
    // to understand if a particular position has 0 or 1
    // 5 : 0101 @2nd position its 1
    cout << getBit(5, 2) << endl;

    // #2 : to set bit
    // to set a particular position with 1
    // 5 : 0101 @1st position we set 1 then it become 0111 -> 7
    cout << setBit(5, 1) << endl;

	// #3 : to clear bit
    // to set a particular position with 0
    // 5 : 0101 @2nd position we clear 1 then it become 0001 -> 1
    cout << clearBit(5, 2) << endl;

    // #2 : to update bit
    // to clearBit and setBit
    // 5 : 0101 @1st position we clear value and store1 hence 0111 -> 7
    cout << updateBit(5, 1, 1) << endl;

    return(0);
}