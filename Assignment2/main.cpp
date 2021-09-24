#include <iostream>
#include<vector>
#include"Person.h"
void change_luck(Person* person, Person* person2)
{
	int luck1 = person->getluck();
	int luck2 = person2->getluck();
	person->setLuck(luck2);
	person2->setLuck(luck1);

}
int main()
{		
	//Person* person = new Person("Nurassyl", 20, std::rand());
	//std::cout << person->getName() << std::endl;
	std::vector<Person>persons(5);
	for (int i = 0; i <5; i++)
	{
		std::string str;
		std::cout << "please enter your name" << std::endl;;
		std::cin >> str;
		std::cout << "please enter your age"<<std::endl;
		int a,b;
		std::cin >> a;
		b = std::rand();
		persons.at(i).setPerson(str, a, b);
		
	}
	int index = 0;
	for (int i = 0; i < 5; i++)
	{
		int max = -9999;
		if (max <= persons.at(i).getluck())
		{
			max = persons.at(i).getluck();
			index = i;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		std::cout << persons.at(i).getName() << " " << persons.at(i).getluck() << std::endl;
	}
	change_luck(&persons.at(0), &persons.at(1));
	for (int i = 0; i < 5; i++)
	{
		std::cout << persons.at(i).getName() << " " << persons.at(i).getluck() << std::endl;
	}
}