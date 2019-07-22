// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
using namespace std;

#define MAX 20

class Person {
	string firstName;
	string lastName;
	int    age;
public:
	Person(string, string);
	string getName(void);
};

Person::Person(string first, string last)
{
	firstName = first;
	lastName  = last;
}


string Person::getName(void) {
	return firstName;
}

////////////////////////////////////////
class Employee : public Person 
{
	int badgeNum;
public:
	Employee(int badge,string first,string last):Person(first,last)
	{
		badgeNum = badge;		
	}
	
};




int main()
{
	
	/// class refresher
	Employee myPerson(777, "Gus", "Nash");
	string first = myPerson.getName();
	cout << first << '\n';
	
	// playing with primes
	for (int i = 3; i < MAX; i+=2) {
		bool prime = true;
		for (int j = 2; j < i; j++) {
			cout << i << " " << j << "\n";
			if (i % j == 0) {
			   cout << i << " not prime \n";
			   prime = false;
			   break;
		    }
		}
		if (prime)
			cout << i << " is prime \n";
	}


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
