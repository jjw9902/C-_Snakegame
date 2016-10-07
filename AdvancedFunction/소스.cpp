#include <iostream>
#include <Windows.h>
#define sum(a,b) a+b
using namespace std;
void StartProgram(string filename){
	ShellExecute(NULL, "open", filename.c_str(),NULL,NULL,SW_SHOW);
}
int main() {
	int x, y;
	cin >> x;
	cin >> y;
	cout << sum(x, y) << endl;
	StartProgram("mspaint");
	system("pause");
	return 0;
}