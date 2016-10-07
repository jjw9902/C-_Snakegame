#include<iostream>
#include<cmath>
#include<ctime>
#include<Windows.h>
#include<string>
using namespace std;
int main() {
	int num, numrand;
	char yn;
	string name;
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		cout << char(rand()%10+97) << endl;
	}
	system("pause");
	return 0;
}