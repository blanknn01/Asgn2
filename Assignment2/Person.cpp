#include "Person.h"
Person::Person()
{
	name = "name";
	age = 1;
	luck = 1;
}
Person::Person(std::string name, int age, int luck)
{
	this->name = name;
	this->age = age;
	this->luck = luck;
}
void Person::setPerson(std::string name, int age,int luck)
{
	this->name = name;
	this->age = age;
	this->luck = luck;
}
int	Person::getAge() const
{
	return age;
}
int Person:: getluck() const
{
	return luck;
}
const std::string&Person:: getName() const {
	return name;
}
void Person::setAge(int age)
{
	Person::name = name;
}
void Person::setLuck(int luck)
{
	Person::luck = luck;
}
void Person::setName(const std::string &name)
{
	Person::name = name;
}

