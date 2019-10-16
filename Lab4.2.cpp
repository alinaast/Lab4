#include <iostream>
using namespace std;
int main() {
	double a;
	const double PI = 3.14;
	cin >> a;
	if (0 < a < 360) {
		a = (a * 180) / PI;
		cout << a;
	}
	return 0;
}
