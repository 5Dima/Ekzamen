#include<iostream>
//STL
#include<vector>
#include<string>

// ���������
#include<windows.h>
#include<iomanip>
#include<map>


using namespace std;

bool perevirka_emaila(map<string, string> m,string str) {
	for (auto el : m) {
		if (el.first == str)return true;
	}
	return false;

}

bool putany() {
	int choic;
	cout << "����� email ��� ����!\n";
	cout << "|| 1 - ���������� �� ���!\n";
	cout << "|| 2 - �����!\n";
	cout << "Enter you choic: ";
	(cin >> choic).get();
	system("cls");
	if (choic == 1)return true;
	return false;
}

class tester {
	map<string,string> m;
	string email, parol;
	bool pere;
public:
	void register_account() {
		pere = true;

		while (pere) {
			cout << string(40, '+') << "\n";
			cout << "���������� �������!\n";
			cout << "����� ����: ";
			getline(cin, email);
			if (perevirka_emaila(m, email)) {
				pere = putany();
			}
			else {
				pere = false;
				cout << "����� ������: ";
				getline(cin, parol);
				m.insert({ email,parol });
			}
		}

	}





};

