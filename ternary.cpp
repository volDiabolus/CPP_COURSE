#include <iostream>

using namespace std;

int supercalculation(const bool choice)
{
	return 5 - (choice) ? -1 : 1;
}

int main()
{
	bool choice;
	cout<<"Enter choice"<<endl;
	cin>>choice;
	cout<<"Super number "<<supercalculation(choice)<<endl;
	return 0;
}

