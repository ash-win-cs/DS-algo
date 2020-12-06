/*
Arrays Challenge-Subarray with given sum
(Google, Amazon, Facebook, Visa)

Problem
Given an unsorted array A of size N of non-negative integers, find a continuous
subarray which adds to a given number S.
Constraints
1 <= N <= 105
0 <= Ai <= 1010
Example
Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
*/
#include<iostream>
using namespace std;


int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r",stdin);
		freopen("output.txt", "w",stdout);
	#endif
    
    int n,s;
    cin >>n>>s;
    int a[n];

    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    }

    int i=0, j=0, st=-1, en=-1, sum=0;

    while(j<n && sum+a[j]<=s){
        sum += a[j];
        j++;
    }
    // now sum>=s

    if (sum == s)
    {
        cout << i+1 << " " << j << endl;
        return(0);
    }

    // now sum > s, /// run st frwd

    while(j<n){
        sum+= a[j];
        while(sum>s){
            sum -= a[i];
            i++;
        }

        if (sum == s)
        {
            st = i+1;
            en = j+1;
            break;
        }
        j++;

    }

    cout << st << " " << en << endl;
    return(0);
}