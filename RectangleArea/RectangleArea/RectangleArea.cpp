#include <iostream>
#include <string>
using namespace std;
double x;
	double y;

//funtion prototype
double rectangle(double x, double y);

double rectangle(double x, double y){
	double area;
	area=x*y;
	return area;
}

int main()
{
	cin >> x;
	cin >> y;
	int A = rectangle(x,y);
	cout << A << endl;
	
system("pause");
	return 0;
}