#include <iostream>

#include <string>

using namespace std;

int num1;

int num2;

char char1='A';

string name;

int main()

{
	num1=5;
	num2=(2*3)+4;
	cout << "num2: " << num2 << endl;
	num2=num1;
	cout << "num2: " << num2 << endl;
	cin >> name;
	cout << "your name is: " << name << "\n";
	system("pause");
	return 0;
}