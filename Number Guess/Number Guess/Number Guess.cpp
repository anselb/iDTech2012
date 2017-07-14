#include <iostream>
#include <string>

using namespace std;

float num1;
float num2;

int main()

{
	cout << "Enter a Number" << endl;
	cin >> num1;
	system("cls");
	cout << "Enter a Guess" << endl;
	while (num2 != num1){
	cin >> num2;
	if(num1 > num2) {
		cout << "Too Low" << endl;
	}else if (num1 < num2) {
		cout << "Too High" << endl;
	}
	}
if(num1 == num2) 
	cout << "Correct Guess" << endl;
		system("pause");
		return 0;
}


