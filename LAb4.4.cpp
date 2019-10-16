#include <iostream>
using namespace std;
int main() {
	int v1, v2, s, s1, s2, s3, t;
	cin >> v1 >> v2 >> s3 >> t;
	s1 = v1 * t;
	s2 = v2 * t;
	s = s1 + s2 + s3;
	cout << s;
	return 0;
}
