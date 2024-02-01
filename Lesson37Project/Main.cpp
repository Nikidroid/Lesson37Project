#include <iostream>

using namespace std;

int sum(int a, int b, int c);

int main() {
	int a, b, c;
	cout << "Enter three numbers: ";
	cin >> a >> b >> c;

	cout << "Sum: " << sum(a, b, c);
	return 0;
}
