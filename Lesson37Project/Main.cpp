#include <iostream>

using namespace std;

int sum(int num1, int num2);

int main() {
	int num1, num2;
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;

	cout << "Sum: " << sum(num1, num2);
	return 0;
}