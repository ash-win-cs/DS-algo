/*
Arrays Challenge-First Repeating Element

(Amazon, Oracle)

Problem
Given an array arr[] of size N. The task is to find the first repeating element in an
array of integers, i.e., an element that occurs more than once and whose index of
first occurrence is smallest.
Constraints
1 <= N <= 10^6
0 <= Ai <= 10^6
Example
Input:
7
1 5 3 4 3 5 6
Output:
2
*/

#include<iostream>
using namespace std;


int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r",stdin);
		freopen("output.txt", "w",stdout);
	#endif
    
    int n;
    cin >>n;
    int a[n+1];

    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    }

    const int N = 1e6+2;
    int idx[N];
    for (int i = 0; i < N; ++i)
    {
        idx[i] = -1;
    }

    int minidx = INT8_MAX;

    for (int i = 0; i < n; ++i)
    {
        if(idx[a[i]] != -1){
            minidx = min(minidx, idx[a[i]]);
        }
        else{
            idx[a[i]] = i;
        }
    }

    if (minidx == INT8_MAX)  
    {
        cout << "-1" << endl;
    }
    else{
        cout << minidx + 1<< endl;
    }
    
    return(0);

}