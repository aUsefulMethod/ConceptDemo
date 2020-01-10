#include <iostream>
using namespace std;
#include <cstdlib>

class Person
{

private:

	string name;
	string height;
	int age;
	int weight;

public:

	Person() {
	
		cout << "Constructor called" << endl;

		this->name = "Tim";
		this->height = "6' 1\"";
		this->age = 45;
		this->weight = 400;

	}

	string getName() {

		return name;

	}

	void setName(string passedName){
	
		this->name = passedName;
	
	}

	string getHeight() {

		return height;

	}

	void setHeight(string passedHeight) {

		this->height = passedHeight;

	}

	int getAge() {

		return age;

	}

	void setAge(int passedAge) {

		this->age = passedAge;

	}

	int getWeight() {

		return weight;

	}

	void setWeight(int passedWeight) {

		this->weight = passedWeight;

	}


};

