#include<iostream>
using namespace std;

class Grandfather
{
public:
	Grandfather()
	{
		cout << "This is the constructor of class Grandfather!" << endl;
	}

	~Grandfather()
	{
		cout << "This is the destructor of class Grandfather!" << endl;
	}
};

class Father:public Grandfather
{
public:
	Father()
	{
		cout << "This is the constructor of class Father!" << endl;
	}

	~Father()
	{
		cout << "This is the destructor of class Father!" << endl;
	}
};

class Son:public Father
{
public:
	Son()
	{
		cout << "This is the constructor of class Son!"<< endl;
	}

	~Son()
	{
		cout << "This is the destructor of class Son!" << endl;
	}
};


void main()
{
	Son *p = new Son;
	delete p;
}