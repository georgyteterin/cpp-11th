#include <iostream>
#include <string>
#include <clocale>
using namespace std;

class Animal {
public:
	string name;
	string feature;
	string sound;

	Animal() {
		cout << "who is it? it is ";
		cin >> name;
		feature = "";
		sound = "";
	}
	
	void get_sound() {
		cout << sound;
	}

	void get_action() {
		cout << feature;
	}

};


int main() {
	setlocale(LC_CTYPE, "rus");
	

	return 0;
}