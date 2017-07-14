#include <iostream>
#include <string>

using namespace std;

float num1;
float num2;

bool found=false;

int main()

{
	cout << "Enter a Number" << endl;
	cin >> num1;
	system("cls");
	while(found==false){
		cout << "Enter a Guess" << endl;
		cin >> num2;
		if(num1 > num2) {
			cout << "Too Low" << endl;
		}else if (num1 < num2) {
			cout << "Too High" << endl;
		}
		else{
			cout << "Correct Guess" << endl;
			found=true;
		}
	}
	system("pause");
	return 0;
}