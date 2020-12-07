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

	// cout << int('a') << " : " << int('A');
	string s = "asbjahsja ABJBjbdasjndJnjsnajns";
	//to upper
	for (int i = 0; i < s.size(); ++i)
	{
		if(s[i] >= 'a' && s[i]<='z')
			s[i] -= 32;
	}
	deb(s);

	// to lower
	for (int i = 0; i < s.size(); ++i)
	{
		if(s[i] >= 'A' && s[i]<='Z')
			s[i] += 32;
	}
	deb(s);


	//inbuilt func

	transform(s.begin(), s.end(), s.begin(), ::toupper);
	deb(s);

	transform(s.begin(), s.end(), s.begin(), ::tolower);
	deb(s);

	return(0);
}