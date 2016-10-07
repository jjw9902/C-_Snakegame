#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	cout << s << endl;
	s = "Some text! ";
	cout << s << endl;
	cout << s.at(2) << endl;

	string word;
	cout << "Enter the world : ";
	cin >> word;
	s.append(word);
	cout << s << endl;
	cout << s.length() << endl;
	cout << s.find('x') << endl;
	s.pop_back();
	cout << s << endl;
	system("pause");
	return 0;
}