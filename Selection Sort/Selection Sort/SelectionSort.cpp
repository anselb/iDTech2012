#include <iostream>
#include <string>
using namespace std;

void selectionSort(int arr[], int n) {
      int i, j, minIndex, tmp;    
      for (i = 0; i < n - 1; i++) {
            minIndex = i;
            for (j = i + 1; j < n; j++)
                  if (arr[j] < arr[minIndex])
                        minIndex = j;
            if (minIndex != i) {
                  tmp = arr[i];
                  arr[i] = arr[minIndex];
                  arr[minIndex] = tmp;
            }
      }
}

int main(){
	int ary[5]={90,45,-1,295,10};
	selectionSort(ary,5);
	for (int i=0; i<5; i++)
		cout << ary[i] << endl;
	system("pause");
		return 0;
}