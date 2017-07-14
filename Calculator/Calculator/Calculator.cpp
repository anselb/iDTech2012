#include <iostream>
#include <string>

using namespace std;

double a;
double b;
char op;
double answer;

double calculate(double a, double b, char op){
	double answer;
	switch(op){
	case '*':
		answer=a*b;
		break;
	case '/':
		answer=a/b;
		break;
	case '+':
		answer=a+b;
		break;
	case '-':
		answer=a-b;
		break;
	default:
		cout << "Please enter a correct operation" << endl;
	}
return answer;
}



int main()
{
	cout << "Enter first number" << endl;
	cin >> a;
	cout << "Enter second number" << endl;
	cin >> b;
	cout << "Enter operation sign" << endl;
	cin >> op;
	answer=calculate(a,b,op);
	cout << "Answer: " << answer << endl;
	system("pause");
}