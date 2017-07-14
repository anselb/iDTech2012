#include <iostream>
#include <string>

int number;

using namespace std;

int factorial(int numbers)
{
	if (numbers==1){
		return 1;
	}
	return(numbers*factorial(numbers-1));
}

int main()
{
cin >> number;
cout << factorial(number) << endl;

system("pause");
	return 0;
}


