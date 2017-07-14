#include <iostream>
#include <string>
using namespace std;

class base_stats{
protected:
	int attackpower;
	int armor;
	int health;
public:
	void setattackpower(int ap);
	int getattackpower();
	
	void setarmor(int a);
	int getarmor();
	
	void sethealth(int h);
	int gethealth();
};

class player: public base_stats{
protected:
	string name;
	int weapondmg;
public:
	void setname(string n);
	string getname();
	
	void setweapondmg(int d);
	int getweapondmg();
	
	void takedmg(int d); //lowers health based on dmg and armor
	int getdmg(); //returns attackpower and weapondmg
};