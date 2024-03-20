#include "Pet.h"
Pet::Pet()
{

}
Pet::Pet(int i, string t, string n, int a)
{
	id = i;
	type = t;
	name = n;
	age = a;
}

int Pet::getId() const
{
	return id;
}
string Pet::getType() const
{
	return type;
}
string Pet::getName() const
{
	return name;
}
int Pet::getAge() const
{
	return age;
}