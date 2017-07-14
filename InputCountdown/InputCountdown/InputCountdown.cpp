#include <iostream>
#include <string>
using namespace std;
double x;
	double y;

//funtion prototype
void Countdown(double x, double y);

void Countdown(double x, double y){
	for(int i=x; i>=y; i--)
	{
		cout << i << endl;
	}
}

int main()
{
	cin >> x;
	cin >> y;
	Countdown(x,y);
	
system("pause");
	return 0;
}

	
