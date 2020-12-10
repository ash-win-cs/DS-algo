#include <iostream>
using namespace std;


int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r",stdin);
		freopen("output.txt", "w",stdout);
	#endif
    
    cout << (1<<8) << endl; // left shift binary operation'
    cout << (1024>>10) ; // right shift binary operation'

    return(0);
}