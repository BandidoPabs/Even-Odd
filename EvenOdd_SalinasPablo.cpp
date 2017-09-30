#include <iostream>
#include <string>

using namespace std;

int main() {

	int x, y;
	cout << "Please enter two integers seperated by space : ";
	cin >> x >> y;
	cout << endl;
	while (x >= y) {
		cout << "Please make sure the first integer is smaller than the second : ";
		cin >> x >> y;
	}
	cout << endl;
	int z = x;
	int evensum = 0, oddsum = 0;
	cout << "Here are all the even numbers between " << x << " and " << y << ": ";
	while (x<y) {
		if ((x % 2) == 0) {
			cout << " " << x << " ";
			evensum = evensum + x;
		}
		x++;
	}
	cout << endl;
	cout << "The sum of the even numbers is : " << evensum << endl;
	cout << "Here are all the odd numbers between " << z << " and " << y << ": ";
	while (z<y) {
		if ((z % 2) != 0) {
			cout << " " << z << " ";
			oddsum = oddsum + z;
		}
		z++;
	}
	cout << endl;
	cout << "The sum of the odd numbers is : " << oddsum << endl;

	system("pause");

	return 0;
}