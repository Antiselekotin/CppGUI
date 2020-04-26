#pragma once
#include <string>
using namespace std;



class Animal
{
protected:
	string name;
	string voice;
	int age;
	bool clicked;
public:
	void setClicked(bool setValue) {
		clicked = setValue;
	}
	bool getCliced() {
		return clicked;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	friend Animal operator + (const Animal& first, const Animal& second) {
		return Animal(first.name + second.name, first.voice + second.voice, first.age + first.age);
	}
	Animal operator = (const Animal& operand) {
		Animal newAn(operand.name, operand.voice , operand.age);
		return newAn;
	}
	Animal() {
		this->name = "Honey";
		this->voice = "YEP";
		this->age = 1;
	}
	Animal(string name, string voice, int age) {
		this->name = name;
		this->voice = voice;
		this->age = age;
	}
	//virtual string oportunities();
	//virtual string interaction();
};

class Memel : public Animal 
{	
public:
	Memel(string name, string voice, int age) : Animal(name, voice, age) {}
	Memel(): Animal() {}
	string oportunities() {
		return "my name is " + name + " and I can say " + voice;
	}
	string interaction() {
		return voice + "\n" + voice + "\n" + voice + "\n" + voice + "\n" + voice;
	}
};
class Fish : public Memel {
public:
	Fish(string name = "", string voice = "", int age = 1) : Memel(name, voice, age) {}
	string oportunities() {
		return "Fishes can't talk";
	}
};
class Bird : public Memel {
public:
	Bird(string name = "", string voice = "", int age = 1) : Memel(name, voice, age) {}
	string oportunities() {
		return "Birds don't like to talk";
	}
};

