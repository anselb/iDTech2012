#include <iostream>
#include <string>

using namespace std;

int x[5]={12,53,25,4,75};
int avg;

int main()

{
	for(int i=0;i<5;i++){
		avg = x[i] + avg;
	}
avg= avg/5;
cout << avg << endl;		
system("pause");
			return 0;
	}