
/*	Question - Array Max*/

#include<iostream>
using namespace std;


int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r",stdin);
		freopen("output.txt", "w",stdout);
	#endif
    
    int n;
    cin >>n;
    int arr[10];

    for (int i = 0; i < n; ++i)
    {
    	cin>>arr[i];
    }

    int mx = -199999;

    for (int i = 0; i < n; ++i)
    {
    	mx = max(mx, arr[i]);
    	cout << mx << endl;
    }

	return(0);
}