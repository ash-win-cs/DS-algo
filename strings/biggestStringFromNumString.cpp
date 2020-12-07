// find the maximum digit formed using the numeric string

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#ifndef deb
#define deb(x) cout<<#x<<" : "<<x<<endl;
#endif

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r",stdin);
		freopen("output.txt", "w",stdout);
	#endif

	string numS;
	cin >> numS;
	//logic sort in descending order

	sort(numS.begin(), numS.end(), greater<char>());

	cout << numS << endl;
	return(0);
}