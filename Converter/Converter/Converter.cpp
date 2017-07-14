#include <iostream>

#include <string>

using namespace std;

double num1;

double num2;

double num3;

int main()

{
	cout << "Enter numeber of seconds" << endl;
	cin >> num1;
	num2=60;
	num3=3600;
	cout << "Minutes: " << num1/num2 << endl;
	cout << "Hours: " << num1/num3 << endl;
	system("pause");
	return 0;
}