#include <iostream>
#include <vector>

using namespace std;
class A
{
public:
	A(){};
	virtual void print(){cout<<"A";}
};

class B: public A
{
	vector<double> d;
public:
	B(){d.resize(500,5.0);}
	virtual void print(){cout<<"B "<<d.size();}
};
int main()
{
	A* a = new B();
	B* b = new B();
	a->print();
	b->print();
	delete a;
	delete b;
	return 0;
}
