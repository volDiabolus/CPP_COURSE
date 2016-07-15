#include <new>        // Must #include this to use "placement new"
#include <string>

class MyClass()
{
	int i;
	string s;
}

int main()
{
	char malloc[sizeof(MyClass)];
	void* place = memory; 
	Fred* f = new(place) Fred();
	// The pointers f and place will be equal
	// ...
	return 0;
}



