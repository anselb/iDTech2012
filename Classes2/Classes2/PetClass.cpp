#include <iostream>
#include <string>
#include "PetClass.h"

using namespace std;

pet::pet() //set variables to default
{
	name="Oreo";
	species="Dog";
	age=3;
	weight=25;
	gender='F';
}
void pet::print(){
	cout << "Name: " << name << endl;
	cout << "Species: " << species << endl;
	cout << "Age: " << age << endl;
	cout << "Weight: " << weight << endl;
	cout << "Gender: " << gender << endl;
}

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

dog::dog(){
	name="Oreo";
	species="Dog";
	age=3;
	weight=25;
	gender='F';
	breed="lab";
}

void dog::print(){
	pet::print();
	cout << "Breed: " << breed << endl;
}

string dog::getbreed(){
	return breed;
}
void dog::setbreed(string newbreed){
	breed=newbreed;
}

void dog::getolder(int a){
	age=a*7;
}