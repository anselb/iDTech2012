#include <iostream>
#include <string>
using namespace std;
float x;
float y;

//funtion prototype
double triangle(float x, float y);

double triangle(float x, float y){
	float area;
	area= (x*y)/2;
	return area;
}

int main()
{
	cout << "Enter the length of the base" << endl;
	cin >> x;
	cout << "Enter the length of the height"<< endl;
	cin >> y;
	float A = triangle(x,y);
	cout << "Area: " << A << endl;
	
system("pause");
	return 0;
} 