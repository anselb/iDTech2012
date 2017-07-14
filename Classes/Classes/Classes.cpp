#include <iostream>
#include <string>

using namespace std;

class pet{
private:
	string name;
	string species;
	int age;
	int weight;
	char gender;
public:
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

string pet::getname(){
	return name;
}
void pet::setname(string newname){
	name=newname;
}

string pet::getspecies(){
	return species;
}
void pet::setspecies(string newspecies){
	species=newspecies;
}

int pet::getage(){
	return age;
}
void pet::setage(int newage){
	age=newage;
}

int pet::getweight(){
	return weight;
}
void pet::setweight(int newweight){
	weight=newweight;
}

char pet::getgender(){
	return gender;
}
void pet::setgender(char newgender){
	gender=newgender;
}

string name;
string species;
int age;
int weight;
char gender;

int main()
{
cout << "Insert name" << endl;
	cin >> name;
cout << "Insert species" << endl;
	cin >> species;
	cout << "Insert age" << endl;
	cin >> age;
	cout << "Insert weight" << endl;
	cin >> weight;
	cout << "Insert gender" << endl;
	cin >> gender;

	pet dog;
	dog.setname(name);
	cout << "Name: " << dog.getname() << endl;

	
	dog.setspecies(species);
	cout << "Species: " << dog.getspecies() << endl;

	
	dog.setage(age);
	cout << "Age: " << dog.getage() << endl;


	dog.setweight(weight);
	cout << "Weight: " << dog.getweight() << endl;


	dog.setgender(gender);
	cout << "Gender: " << dog.getgender() << endl;

system("pause");
		return 0;
		}