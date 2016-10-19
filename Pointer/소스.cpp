#include<iostream>
using namespace std;

int main() {
	int *p;
	int n=0;
	p = &n;
	cout << p << endl << *p << endl;
	*p = 1;
	cout << n << endl;
	*p += 10;
	cout << n << endl;
	system("pause");
	return 0;
}