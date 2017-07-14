#include <iostream>
#include <string>

using namespace std;

bool found=false;
int x[10]={1,2,3,4,5,6,7,8,9,10};

int main()
{
	int index=0;
	while(!found && index < 10){
		if(x[index]==9){
			found=true;
		}else 
			index++;
	}
	//return found;
	cout << found << endl;
	system("pause");
}