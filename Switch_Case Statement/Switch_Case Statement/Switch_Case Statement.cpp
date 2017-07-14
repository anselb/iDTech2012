#include <iostream>
#include <string>

using namespace std;

float num1;

int main()
{
	int num1=3;
	cout << "Please type a number from 0-3" << endl;
	cin >> num1;
	switch (num1) {

	case 0:
		cout << "You pressed 0" << endl;
		break;
	case 1:
		cout << "You pressed 1" << endl;
		break;
	case 2:
		cout << "You pressed 2" << endl;
		break;
	case 3:
		cout << "You pressed 3" << endl;
		break;
	default:
		cout << "You didn't press a number from 0-3" << endl;
		break;
	}
	system("pause");
	return 0;

}