#include <iostream>
#include <stdlib.h>
#include <time.h>
 
using namespace std;
 
int main() {
      int secretNumber = 0;
     
      // initialize randomizer
      srand(time(0));
 
      // propose a number in range 0-99
      secretNumber = rand() % 100;
     
      // loop
      bool guessIsRight = false;
      do {
            int guess;
            cout << "Your guess (0-99): ";
            cin >> guess;
            if (guess < secretNumber)
                  cout << "Too low!" << endl;
            else if (guess > secretNumber)
                  cout << "Too high!" << endl;
            else
                  guessIsRight = true;
      } while (!guessIsRight);
 
      // print a message
      cout << "Congratulations! Your guess is right!" << endl;
 
      return 0;
}