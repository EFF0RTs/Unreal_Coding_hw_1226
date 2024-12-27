#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
	virtual void makeSound() = 0;

	virtual ~Animal(){}
};

class Dog : public Animal
{
public:
	void makeSound() {
		cout << "Dog: Woof! Woof!" << endl;
	}
};

class Cat : public Animal
{
public:
	void makeSound() {
		cout << "Cat: Meow! Meow!" << endl;
	}
};

class Cow : public Animal
{
public:
	void makeSound() {
		cout << "Cow: Moo! Moo!" << endl;
	}
};

int main() {
	// Animal Ÿ���� ������ �迭 ���� �� �ʱ�ȭ
	Animal* animals[] = { new Dog(), new Cat(), new Cow()};

	cout << "Animal sounds: " << endl;
	for (int i = 0; i < 3; i++) {
		animals[i]->makeSound();
	}

	// ���� �޸� ����
	for (int i = 0; i < 3; i++) {
		delete animals[i];
	}
	return 0;
}