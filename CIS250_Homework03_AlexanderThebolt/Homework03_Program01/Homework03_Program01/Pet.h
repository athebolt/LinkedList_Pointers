#pragma once
#include "string"
using namespace std;
class Pet
{
private:
	int id;
	string type;
	string name;
	int age;
public:
	Pet();
	Pet(int, string, string, int);

	int getId() const;
	string getType() const;
	string getName() const;
	int getAge() const;
};

