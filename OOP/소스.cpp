#include<iostream>
using namespace std;
class Point {
public:
	int x, y;
public:
	int getX() {
		return x;
	}
	int getY(){
		return y;
	}
	void set(int a, int b) {
		x = a; y = b;
	}
};
int main() {
	Point p1, p2;
	p1.set(5, 1);
	cout << p1.x << " " << p1.y << endl;
	system("pause");
	return 0;
}