#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int low;
int high;

int gran(int low, int high){
	srand(time(NULL));
	return (rand()%(high-low))+low;
}

int main()
{
	cout << "Enter a the highest value your random number can be" << endl;
	cin >> high;
	cout << "Enter a the lowest value your random number can be" << endl;
	cin >> low;
	cout << "Random Number: " << gran(low,high) << endl;
	system("pause");
}
