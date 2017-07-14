#include <iostream>
#include <string>

using namespace std;

int num1;

	int main()
{
	cout << "Insert Test Score" << endl;
	cin >> num1;
		if(num1 >= 90){
			cout << "A" << endl;
		}else if(num1 >= 80){
			cout << "B" << endl;
		}else if(num1 >= 70){
			cout << "C" << endl;
		}else if(num1 >= 60){
			cout << "D" << endl;
		}else{
			cout << "F" << endl;
		system("pause");
		return 0;
		}
	}