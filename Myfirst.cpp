#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	cout << "What is your name" << endl;
	getline(cin, name);
	cout << "My name is " << name << endl;

	int age;
	cout << "What is your age?" << endl;
	cin >> age;
	cout << "I am " << age << " years old" << endl;
	cin.ignore();

	string anime;
	cout << "Which is your favourite anime character" << endl;
	getline(cin, anime);
	cout << "My favourite anime character name is " << anime << endl;

	int episodes;
	cout << "How many episodes does it contain" << endl;
	cin >> episodes;
	cout << "It contains " << episodes << " episodes" << endl;

		return 0;
}