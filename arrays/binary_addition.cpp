
/*	Question - Binnary Addition
 101 + 110 = 1011
*/

#include<iostream>
using namespace std;

int reversed(int n){
	int reverse = 0;

	while(n>0){
		reverse = reverse * 10 + n%10;
		n/=10;
	}
	return(reverse);
}

int addBinary(int a, int b){
	int ans = 0;
	int prevCarry = 0;

	while(a>0 && b>0){
		if ( a%2 == 0 && b%2 == 0){
			ans = ans * 10 + prevCarry;
			prevCarry = 0;
		}
		else if ( (a%2 == 0 && b%2 == 1) or (a%2 == 1 && b%2 == 0) ){
			if (prevCarry == 1)
			{
				ans = ans*10 + 0;
				prevCarry = 1;
			}
			else{
				ans = ans * 10 + 1;
				prevCarry = 0;
			}
		}
		else{
			ans = ans*10 + prevCarry;
			prevCarry = 1;
		}
		a /= 10;
		b /= 10;
	}

	while(a>0){
		if (prevCarry==1)
		{
			if (a%2 == 1)
			{
				ans = ans*10 + 0;
				prevCarry = 1;
			}
			else{
				ans = ans*10 + 1;
				prevCarry = 0;
			}
		}
		else{
			ans = ans*10 + (a%2);
			// prevCarry = 0;
		}
		a/=10;
	}

	while(b>0){
		if (prevCarry==1)
		{
			if (b%2 == 1)
			{
				ans = ans*10 + 0;
				prevCarry = 1;
			}
			else{
				ans = ans*10 + 1;
				prevCarry = 0;
			}
		}
		else{
			ans = ans*10 + (b%2);
			// prevCarry = 0;
		}
		b/=10;
	}

	if(prevCarry == 1){
		ans = ans*10 + 1;
	}

	ans = reversed(ans);
	// cout << ans;
	return(ans);
}


int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r",stdin);
		freopen("output.txt", "w",stdout);
	#endif

	int x, y;
	cin >> x >> y;
	cout << addBinary(x,y);
	return(0);
}
    