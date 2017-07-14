#include <iostream>
#include <string>

using namespace std;

float num1;
float num2=0;

int main()
{
	cout << "Insert First Number" << endl;
	cin >> num1;
	cout << "Insert Second Number" << endl;
	cin >> num2;
	do{
		num2=(num1+num2)/2;
		cout << num2 << endl;
		cout << "Insert next value or press 0 and enter to stop program" << endl;
		cin >> num1;
	}while(num1 !=0);
	return 0;
}
