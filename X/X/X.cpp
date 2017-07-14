#include <iostream>
#include <string>
using namespace std;
int x;
int y;
int main()
{
	for(int x=1; x<=9; x++){
		for(int y=1; y<=9; y++){
			if (x==y || x+y==10){
				cout << "*";
			}else{ 
				cout << " ";
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}