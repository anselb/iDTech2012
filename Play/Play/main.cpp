#include <iostream>
#include <string>
#include "player.h"

using namespace std;

void battle(player*a, player*b){
	while(a->gethealth()>0 && b->gethealth()>0){
		int admg =a->getdmg();
		b->takedmg(admg);
		cout << a->getname() <<" attacked " << b->getname() << endl;
		cout << a->getname() << "'s damage to " << b->getname() << ": " << admg << endl;
		cout << b->getname() << " health: " << b->gethealth() << endl;
		cout << b->getname() << " armor: " << b->getarmor() << "\n\n";
		int bdmg =b->getdmg();
		a->takedmg(bdmg);
		cout << b->getname() <<" attacked " << a->getname() << endl;
		cout << b->getname() << "'s damage to " << a->getname() << ": " << bdmg << endl;
		cout << a->getname() << " health: " << a->gethealth() << endl;
		cout << a->getname() << " armor: " << a->getarmor() << "\n\n";
	}
	if(a->gethealth()<0){
		cout << b->getname() << " won" << endl;
	}else{
		cout << a->getname() << " won" << endl;
	}
}

int main()
{
	player a;
	a.setname("One");
	a.setarmor(100);
	a.sethealth(100);
	a.setattackpower(2);
	a.setweapondmg(5);
	player b;
	b.setname("Two");
	b.setarmor(100);
	b.sethealth(100);
	b.setattackpower(2);
	b.setweapondmg(5);
	battle(&a,&b);
	system("pause");
}