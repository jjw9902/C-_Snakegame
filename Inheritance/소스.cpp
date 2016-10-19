#include<iostream>
using namespace std;

class Parent{
private:
	int varS;
	void PrintVarS();
public:
	int varP;
	void PrintVarP();
	Parent() { varS = 5; varP = 10; }
protected:
	int varX;
	void PrintvarX() {
		cout << "X = " << varX << endl;
	}
	void SetX(int a) { varX = a; }
};

void Parent::PrintVarP() {
	cout << "P = " << varP << endl;
}
void Parent::PrintVarS() {
	cout << "S = " << varS << endl;
}

class Child : public Parent{
public:
	void SetP(int a) { varP = a; SetX(a); PrintvarX(); }

};
int main() {
	Parent p;
	p.PrintVarP();
	Child c;
	c.PrintVarP();
	c.SetP(5);
	c.PrintVarP();
	p.PrintVarP();
	system("pause");
	return 0;
}