// find the maximum time (freq) a char has occured and op it

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

	string str;
	cin >> str;
	int arr[26];
	for (int i = 0; i < 26; ++i)
	{
		arr[i]=0;
	}

	transform(str.begin(), str.end(), str.begin(), ::tolower);

	for (int i = 0; i < str.size(); ++i)
	{
		arr[str[i] - 97]++;
	}

	// char ans = 'a';
	// int maxf = 0;

	// for (int i = 0; i < 26; ++i)
	// {
	// 		if (arr[i] > maxf)
	// 		{
	// 			maxf = arr[i];
	// 			ans = i + 97;
	// 		}
	// }
	// cout << maxf << " " << ans;

	sort(arr, arr+26);
	cout << arr[25];
	return(0);
}