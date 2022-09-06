#include <iostream>
using namespace std;
class student {
	string name;
	int age;
public:
	student() {
		name = "";
		age = 0;
	}
	student(string n, int a) {
		name = n;
		age = a;
	}
	void Print() {
		cout << "X:" << name << " Y:" << age << endl << endl;
	}
};
int main()
{




}