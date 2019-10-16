#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double a;
	const double PI = 3.14;
	cin >> a;
	if (0 < a < 360) {
		a = (a * PI) / 180;
		cout << a;
	}
	return 0;
} 