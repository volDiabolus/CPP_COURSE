#include <vector>
#include <iostream>
using namespace std;

template <typename T, class U> class Base
{
protected:
	vector<T> val;
	U a;
public:
	Base(){}
	//Base(int a, int b){val=vector<T>(a,b);}
	virtual void op(...){}
	void printVal(){for (int i=0; i<val.size(); i++) cout<<val[i]<<" ";}
};

template <typename T, class U> class Derived : public Base <T,U>
{
public:
	Derived(int a, int b){this->val=vector<T>(a,b);}
	virtual void op(vector <T> my_vec){this->val=my_vec;}
};

int main()
{
	Derived<int,int> a(2,100);
	vector<int> b(1,77);

    a.op(b);

	a.printVal();
	return 0;
}
