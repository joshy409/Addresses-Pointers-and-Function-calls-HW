#include <iostream>
using namespace std;

int fib(int n) {
	int fn;
	if (n == 1)
	{
		fn = 1;
	}
	else if (n == 0)
	{
		fn = 0;
	}
	else
	{
		fn = fib(n - 1) + fib(n - 2);
	}
	return fn;
}


int main() {
	int n = 21;
	cout << "fib(" << n << ") = " << fib(n) << endl;
}
