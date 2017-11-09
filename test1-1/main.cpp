#include <iostream>
using namespace std;

class Cpoint {
public:
	static int value;
	static int num;
	Cpoint(int x, int y) :xp(x),yp(y){}
	~Cpoint() { num++; cout << "µ÷ÓÃÎö¹¹:" << num << endl; }

	void print(int i) {
		cout << "this is int:" << i << endl;
	}

	int print(double i) {
		cout << "this is double:" << i << endl;
		int a = 1111;
		return a;
	}

	Cpoint operator/(const Cpoint& a) {
		Cpoint point(0,0);
		point.xp = this->xp + a.xp;
		point.yp = this->yp + a.yp;
		return point;
	}

	int showx() {
		return xp;
	}

	int showy() {
		return yp;
	}

private:
	int xp, yp;
};

int Cpoint::value = 0;
int Cpoint::num = 0;

//test//
int main()
{
	Cpoint c(1,2);
	Cpoint e(3,4);
	Cpoint d = c /e;
	cout << "this is test:"  << d.showy() << endl;
}