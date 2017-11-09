#include <iostream>
using namespace std;

class Cpoint {
public:
	static int value;
	static int num;

	~Cpoint() { num++; cout << "µ÷ÓÃÎö¹¹:" << num << endl; }

	void print(int i) {
		cout << "this is int:" << i << endl;
	}

	void print(double i) {
		cout << "this is double:" << i << endl;
	}

private:
	int xp, yp;
};

int Cpoint::value = 0;
int Cpoint::num = 0;


int main()
{
	Cpoint c;
	int a = 10;
	double b = 10.00;
	c.print(b);
}111