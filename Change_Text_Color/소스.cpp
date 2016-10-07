#include<iostream>
#include<conio.h>
#include<Windows.h>
using namespace std;
void textcolor(int color_number) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number | FOREGROUND_INTENSITY);
}
int main() {
	for (int i = 0; i < 256; i++) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
		cout << "Text Color in use" << i << endl;
	}
	system("pause");
	return 0;
}