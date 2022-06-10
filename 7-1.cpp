#include <iostream>

using namespace std;

struct Point {
	int x, y;
	Point(int xx = 0, int yy = 0):x(xx), y(yy) { }
	void print() { cout << "\t(" << x << "," << y << ")\n"; }
};

class Line {
	Point p1, p2;
public:
	Line(int x1, int y1, int x2, int y2):p1(x1,y1), p2(x2,y2) {}
	void print()
	{
		cout << "Line:\n";
		p1.print();
		p2.print();
	}
};

int main()
{
	Point p(1, 2);
	Line l(3, 4, 5, 6);
	p.print();
	l.print();
}