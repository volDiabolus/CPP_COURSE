#include <iostream>
#include <vector>
using namespace std;

// member initializer lists - 1
class Foo
{
  int count;
  vector<int> vec;

public:
  Foo(int val)
  : count(val * 3),
    vec(count)
  {
  }
  int vecSize(){return vec.size();}
};

int main()
{
	Foo f(5);
	std::cout<<f.vecSize();
	return 0;
}
