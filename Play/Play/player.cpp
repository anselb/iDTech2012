#include "player.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include "MersenneTwister.h"

using namespace std;

void base_stats::setattackpower(int ap){
	attackpower=ap;
}
int base_stats::getattackpower(){
	return attackpower;
}

void base_stats::setarmor(int a){
	armor=a;
}
int base_stats::getarmor(){
	return armor;
}

void base_stats::sethealth(int h){
	health=h;
}
int base_stats::gethealth(){
	return health;
}

void player::setname(string n){
	name=n;
}
string player::getname(){
	return name;
}

void player::setweapondmg(int d){
	weapondmg=d;
}
int player::getweapondmg(){
	return weapondmg;
}

void player::takedmg(int d){
	if(armor > 0){
		armor = armor - (d*.7);
		health = health - (d*.3);
	}else{
		health = health - d;
	}
}
int player::getdmg(){
	MTRand MT;
	int x= MT.rand(100);
	if(x>90){
		cout << name << " Critical Strike" << endl;
	return(attackpower*weapondmg*2);
	}
	if(x<10){
		cout << name << " miss" << endl;
		return 0;
	}
	return(attackpower*weapondmg);
}