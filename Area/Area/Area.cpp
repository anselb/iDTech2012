#include <iostream>

#include <string>

using namespace std;

double num1;

double num2;

double num3;

int main()

{
	cout << "Enter Height" << endl;
	cin >> num1;
	cout << "Enter Length" << endl;
	cin >> num2;
	cout << "Enter Width" << endl;
	cin >> num3;
	cout << "Area: " << num1*num2*num3 << endl;
	system("pause");
	return 0;
}