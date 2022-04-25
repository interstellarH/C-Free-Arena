#include <iostream>
using namespace std;
// 在此处补充你的代码
//考察派生（wrong，还有多态，千万别忘了) 
class Animal
{
public:
	static int number;
	Animal()//构造函数不能virtual 
	{
		number++;
	}
	virtual ~Animal()
	{
		number--;
	}
};
class Dog:public Animal
{
public:
	static int number;
	Dog()
	{
		number++;//在重名的情况下，不加说明调用的就是这个类里面的 
	}
	~Dog()
	{
		number--;
	}
};
class Cat:public Animal
{
public:
	static int number;
	Cat()
	{
		number++;
	}
	~Cat()
	{
		number--;
	}
};

int Animal::number=0; 
int Cat::number=0;
int Dog::number=0; 

void print() {
	cout << Animal::number << " animals in the zoo, " << Dog::number << " of them are dogs, " << Cat::number << " of them are cats" << endl;
}

int main() {
	print();
	Dog d1, d2;
	Cat c1;
	print();
	Dog* d3 = new Dog();
	Animal* c2 = new Cat;
	Cat* c3 = new Cat;
	print();
	delete c3;
	delete c2;
	delete d3;
	print();
}
