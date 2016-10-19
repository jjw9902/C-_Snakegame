#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
const int width = 20;
const int height = 10;
int x, y, fruitX, fruitY, score;
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;
int tailX[500], tailY[500];
int nTail;
bool gameOver;
void SetUp() {
	gameOver = false;
	dir = STOP;
	x = width / 2;
	y = height / 2;
	fruitX = (rand() % width)+1;
	fruitY = (rand() % (height+1))+1;
	score = 0;
}
void Draw() {
	system("cls");
	for (int i = 0; i < width+2; i++)cout << "#";
	cout << endl;
	for (int i = 0; i < height+2; i++) {
		for (int j = 0; j < width+2; j++) {
			if (j == 0 || j == width + 1)cout << "#";
			else if (i == y&&j == x)cout << "O";
			else if (i == fruitY&&j == fruitX)cout << "F";
			else {
				bool print = false;
				for (int k = 0; k < nTail; k++) {
					if (tailX[k] == j&&tailY[k] == i) {
						cout << "o";
						print = true;
					}					
				}
				if(!print)cout << " ";				
			}
		}
		cout << endl;
	}
	for (int i = 0; i < width+2; i++)cout << "#";
	cout << endl;
	cout << "Score : " << score << endl;
}
void Input() {	
	int prevX = tailX[0];
	int prevY = tailY[0];
	int prev2X, prev2Y;
	tailX[0] = x; tailY[0] = y;
	for (int i = 1; i < nTail; i++) {
		prev2X = tailX[i];
		prev2Y = tailY[i];
		tailX[i] = prevX;
		tailY[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;
	}
	if (_kbhit()) {
		switch (_getch()) {
		case 'a':
			dir = LEFT;
			break;
		case 'd':
			dir = RIGHT;
			break;
		case 'w':
			dir = UP;
			break;
		case 's':
			dir = DOWN;
			break;
		case 'x':
			gameOver = true;
			break;
		}
	}
}
void Logic() {
	switch (dir) {
	case LEFT:
		x--;
		break;
	case RIGHT:
		x++;
		break;
	case UP:
		y--;
		break;
	case DOWN:
		y++;
		break;
	default:
		break;
	}
	if (x == fruitX&&y == fruitY) {
		score++;
		nTail++;
		fruitX = (rand() % width)+1;
		fruitY = (rand() % (height+1))+1;
	}
	if (x == 0 || x > width || y < 0 || y > height + 1)gameOver = true;
	for (int i = 0; i < nTail; i++) {
		if (tailX[i] == x&&tailY[i] == y)gameOver = true;
	}
}

int main() {
	srand(time(NULL));
	SetUp();
	while (!gameOver) {
		Draw();
		Input();
		Logic();
		Sleep(100);
	}
	system("pause");
	return 0;
}