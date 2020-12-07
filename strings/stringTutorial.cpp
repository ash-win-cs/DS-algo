//string - STL library

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
		cin >> str; // does not read spaces
		deb(str);

		string str1(5, 'n');
		deb(str1);

		string str2 = "Ashwin CS";
		deb(str2);

		//input sentence
		getline(cin, str);
		deb(str);

		//functions
		
		str.append(str1);
		deb(str);

		deb(str + str1 + str2);

		//accessable using indexes
		deb(str[3]);

		str2.clear();
		deb(str2);

		//comparing
		string str3 = str;
		deb(str.compare("ashwin cs is cool"));
		deb(str.compare(str3));

		str3.clear();
		if (str3.empty())	
		{
			deb("String is empty");
		}

		//erace- dlt elements frm a position
		str3 = "Ashwin";
		str3.erase(3, 3);
		deb(str3);

		//find any part is present in the string
		str3.append(str);
		deb(str3);
		deb(str3.find("Snn"));

		//insert bw any string
		str3.insert(3, "win");
		deb(str3);

		deb(str3.size());
		deb(str3.length());

		deb(endl);
		for (int i = 0; i < str3.size(); ++i)
		{
			deb(str3[i]);
		}

		deb(endl);
		deb(str3);
		str2 = str3.substr(0, 6);
		deb(str2);

		// string to integer
		str3 = "1234";
		int x = stoi(str3);
		x += x;
		deb(x);

		// integer to string
		deb(to_string(x) + "54" + "cs");

		//sort the string
		deb(str2);
		sort(str2.begin(), str2.end()); //ascending order
		deb(str2);
	return(0);
}