
/*	Question - Pattern - palindrome
      1 
    2 1 2 
  3 2 1 2 3 
4 3 2 1 2 3 4 .
*/

#include<iostream>
using namespace std;


int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r",stdin);
		freopen("output.txt", "w",stdout);
	#endif
    
	int n;
	cin >> n;

	for ( int i=1; i<n; i++){
		int j;
		for ( j=1; j<n-i; j++){
			cout << "  ";
		}
		int k = i;
		for ( j=n-i;j<n;j++){
			cout << k-- << " ";
		}
		k = 2;
		for (j=n; j<n+i-1;j++){
			cout << k++ << " ";
		}
		cout << endl;
	}
	return 0;
}