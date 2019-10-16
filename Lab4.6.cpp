#include <iostream>
using namespace std;
int main() {
	double a1, a2, b1, b2, c1, c2, x, y;
	cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
	y = (c1 * a2 - a1 * c2) / (a2 * b1 - a1 * b2);
	x = (c2 - b2 * y) / a2;
	cout << x << " " << y;
	return 0;
}