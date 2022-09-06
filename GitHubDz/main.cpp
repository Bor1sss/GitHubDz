#include <iostream>
using namespace std;
class Point {
	int x, y;
public:
	Point() {
		x = y = 0;
	}
	Point(int a, int b) {
		x = a;
	}

	void Print() {
		cout << "X:" << x << " Y:" << y << endl << endl;
	}
};
int main()
{

	Point obj1;
	Point obj2(1, 2);
	obj2.Print();


}