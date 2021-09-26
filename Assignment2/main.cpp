#include <iostream>
#include<vector>
#include"Person.h"
void change_luck(Person* person, Person* person2)//changing the luckies of the people
{
	int luck1 = person->getluck();
	int luck2 = person2->getluck();
	person->setLuck(luck2);
	person2->setLuck(luck1);
}
int main()
{		
	Person* person = new Person("Nurassyl", 20, std::rand());//creating the dynamically person
	//when we create dynamically then
	//we use arrow to point 
	std::cout << person->getName() << std::endl;
	//if we create statically we use dot pointer
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
	for (int i = 0; i < 5; i++)//finding the luckiest person
	{
		int max = -9999;
		if (max <= persons.at(i).getluck())
		{
			max = persons.at(i).getluck();
			index = i;
		}
	}
	for (int i = 0; i < 5; i++)//displaying the all members with luck
	{
		std::cout << persons.at(i).getName() << " " << persons.at(i).getluck() << std::endl;
	}
	std::cout << "/n";
	//displaing the luckiest person
	std::cout << persons.at(index).getName() << " " << persons.at(index).getluck()<<std::endl;

	change_luck(&persons.at(0), &persons.at(1));//changing the luck of first and second person

	for (int i = 0; i < 5; i++)
	{
		std::cout << persons.at(i).getName() << " " << persons.at(i).getluck() << std::endl;
	}
}