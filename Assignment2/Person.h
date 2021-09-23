#include<string>
class Person
{
public:
	Person();
	Person(std::string name, int age,int luck);
	void setPerson(std::string name, int age,int luck);
	int	getAge() const;
	int getluck() const;
	const std::string& getName() const;
	void setAge(int age);
	void setLuck(int luck);
	void setName(const std::string& name);
	
private:
	std::string name;
	int age;
	int luck;
};

