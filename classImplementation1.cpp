#include<iostream>
using namespace std;

class Arithmetic
{
 public:
	int a, b, c;
	Arithmetic(){
		a = b = c = 0;
	}
	void ADD(){
		c = a + b;
	}
	void MUL(){
		c = a * b;
	}
	void SUB(){
		c = a - b;
	}
	void DIV(){
		c = a / b;
	}
};

class PARENT
{
public:
	int X, Y, Z;
	PARENT(){
		X = Y = Z = 0;
	}
	void Input(){
		cin >> X >> Y;
	}
	void ADD(){
		Z = X + Y;
	}
	void Output(){
		cout << "X " << X << endl;
		cout << "Y " << Y << endl;
		cout << "Z " << Z << endl;
	}
	
};

class CHILD : public PARENT
{
public:
	void SUB(){
		Z = X - Y;
	}	
};

int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r",stdin);
		freopen("output.txt", "w",stdout);
	#endif

	Arithmetic O;
	O.a = 10;
	O.b = 25;
	O.ADD();
	cout << O.c << endl;

	CHILD c1;
	c1.Input();
	c1.ADD();
	c1.Output();
}
