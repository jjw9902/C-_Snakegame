#include<iostream>
using namespace std;
int main() {	
	int n;
	cin >> n;
	int *a = new int[n];
	cout << "enter number of elements: ";
	for (int i = 0; i < n; i++) cin >> a[i];
	cout << "----------------------------" << endl;
	for (int i = 0; i < n; i++)cout << a[i] << endl;
	delete[] a;
	system("pause");
	return 0;
}