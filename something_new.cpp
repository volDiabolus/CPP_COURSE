#include <iostream>
#include <string>
using namespace std;

struct Some
{
	Some(int _a):a(_a){};
	int a;
};

struct MyClass
{
	int a;
};

int main(int argc, char *argv[])
{
    const int m=3;
    MyClass** arr= new MyClass*[10];
	MyClass A,B;
    
    Some* arr2[100000];

	for(int i = 0; i < 100000; i++)
		arr2[i]=new Some(520);

	for(int i = 0; i < 100000; i++)
		delete arr2[i];
    
    for(int i = 0; i < m; i++)
    {
        arr[i] = new MyClass;
		cout<<arr[i]->a<<" "<<&(arr[i]->a)<<endl;
    }

	std::cout<<A.a<<" "<<&A.a<<endl;
	std::cout<<B.a<<" "<<&B.a<<endl; //приоритет операторов позволяет не ставить скобок
    
    for(int i = 0; i < m; i++)
    {
        delete arr[i];
    }
	delete [] arr;

    
    return 0;
}
