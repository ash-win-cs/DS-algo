//How to swap two numbers without using a temporary variable?

#include<iostream>
using namespace std;

void swap(int &x, int &y) { // arithematic swap
	x = x + y;
    y = x - y; 
    x = x - y; 
}

void swapXor(int &x, int &y) {
	x = x ^ y; 
    y = x ^ y; 
    x = x ^ y;
}

void swapMix(int &a,int &b)
{
    //same as a = a + b
    a = (a & b) + (a | b);
 
    //same as b = a - b
    b = a + (~b) + 1;
 
    //same as a = a - b
    a = a + (~b) + 1;
}

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r",stdin);
		freopen("output.txt", "w",stdout);
	#endif
    
    int a = 101, b = 20;
    cout << a << " : " << b << endl; // before
    swapMix(a, b);
    cout << a << " : " << b << endl; // after

    return(0);
}