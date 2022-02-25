#include<iostream>
#include<string>
#include <fstream>

using namespace std;

struct HumanData {
	string name = "";
	int age;
	string mail = "";
};

class Human {
	private:
		string _name;
		int _age;
	public:
		string _mail = "";
		Human(string name, int age, string mail) : _name(name), _age(age), _mail(mail){};
		Human(HumanData data) {
			this->_name = data.name;
			this->_age = data.age;
			this->_mail = data.mail;
		}
		Human(int age) {
			this->_age = age;
			this->_name = "Default";
			this->_mail = "Default";
		}
		Human(string name) {
			this->_age = 0;
			this->_name = name;
		}
		Human() {
			this->_age = 0;
			this->_name = "Default";
		}

		string getName() { return this->_name; }
		void setName(string newName) {this->_name = newName;}

		int getAge() { return this->_age; }
		void setAge(int newAge) { this->_age = newAge; }

		void printHumanData() {
			cout << "Name: " << this->_name << endl;
			cout << "Age: " << this->_age << endl;
			cout << "Email: " << this->_mail << endl;
			cout << "---------------------------------------" << endl;
		}
};

int main() {
	HumanData data = { "Jhon", 54, "mail@mail.mail", };

	Human * human = new Human(data);
	Human * human2 = new Human("Petya");
	Human * human3 = new Human("Jo", 44, "abc@mail.ru");
	Human * human4 = new Human(44);
	Human * human5 = new Human();

	human->printHumanData();
	human2->printHumanData();
	human3->printHumanData();
	human4->printHumanData();
	human5->printHumanData();

	delete human;
	delete human2;
	delete human3;
	delete human4;
	delete human5;

	return 0;
}
