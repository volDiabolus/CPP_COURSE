#include <iostream>
using namespace std;

struct MyClass
{ 
    MyClass() { cout<< "Объект создан\n"; }
   ~MyClass() { cout<< "Объект удален\n"; }
    int a;
};

// двумерные массивы

int main(int argc, char *argv[])
{
    const int m=3;
    MyClass** arr= new MyClass*[10];
    
    for(int i = 0; i < m; i++)
    {
        arr[i] = new MyClass[m];
    }
    
    for(int i = 0; i < m; i++)
    {
        delete arr[i];
    }
	delete [] arr;
     
    return 0;
}
