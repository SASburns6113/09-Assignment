#include <iostream>


using namespace std;

int main()
{
	cout << "\n\t\tWelcome\n";
	// plain old int variable
	int age = 21;
	// Here is a ref to our age variable
	int& rage = age;

	cout << " \nage= " << age << endl;
	cout << "rage= " << rage << endl;

	rage = 25;

	cout << " \nage= " << age << endl;
	cout << "rage= " << rage << endl;

	age = 51;

	cout << " \nage= " << age << endl;
	cout << "rage= " << rage << endl;

	system("pause");
	return 0;
}