#include <iostream>

class foo
{
    private:
		static int a;
    public:
	static void modifyFoo(foo & const baz)
	{
		foo.a=100;
		std::cout<<foo.a<<"\n";
	};
};

