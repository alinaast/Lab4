#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	double a, b;
	double x;
	cin >> a >> b;
	if (a != 0) {
		x = -b / a;
		cout << x;
	}
	else cout << "нет решений";
	return 0;
}
