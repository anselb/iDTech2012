#include <iostream>
#include <string>

using namespace std;

#ifndef PETCLASS_H
#define PETCLASS_H

class pet{
protected:
	string name;
	string species;
	int age;
	int weight;
	char gender;
public:

	pet();
	void print();

	string getname();
	void setname(string newname);

	string getspecies();
	void setspecies(string newspecies);

	int getage();
	void setage(int newage);

	int getweight();
	void setweight(int newweight);

	char getgender();
	void setgender(char newgender);
};

class dog: public pet{
private:
	string breed;
public:
	dog();
	string getbreed();
	void setbreed(string newbreed);

	void getolder(int years);
	void print();
};

#endif