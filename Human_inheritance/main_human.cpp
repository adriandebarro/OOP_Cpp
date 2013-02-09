#include <iostream>
#include <string>

using namespace std;

class Human
{
public:
	string colour;
	Human()	{ cout << "Human constructor" << endl; colour = "Transparent"; }
	~Human() { cout << "Human destructor" << endl;	}
	virtual void pee() {} ;
};

class Female : public Human
{
public:
	string colour;
	Female() { cout << "Female constructor" << endl; colour = "Fancy"; }
	void pee() { cout << "Peeing sitting: " << colour << endl; }
};

class Male : public Human
{
public:
	void pee() { cout << "Peeing standing" << endl; }
};

int main()
{/*
	Human human;
	human.pee();

	Female woman;
	woman.pee();*/

	Human* anyone;
	anyone = new Female();

	anyone->pee();

	system("PAUSE");
}