#include<iostream>
//STL
#include<vector>
#include<string>
#include<map>

// додадктові
#include<windows.h>
#include<iomanip>
#include<fstream>
#include<algorithm>


using namespace std;

bool perevirka_emaila(map<string, string> m,string str) {
	for (auto el : m) {
		if (el.first == str)return true;
	}
	return false;

}

bool putany() {
	int choic;
	cout << "|| 1 - Спробувати ще раз!\n";
	cout << "|| 2 - Вихід!\n";
	cout << "Enter you choic: ";
	(cin >> choic).get();
	system("cls");
	if (choic == 1)return true;
	return false;
}

class tester {
	map<string,string> m;
	string email, parol;
	bool pere,login;
public:
	void register_account() {
		pere = true;
		while (pere) {
			cout << string(40, '+') << "\n";
			cout << "Регістрація акаунта!\n";
			cout << "Ведіть емаїл: ";
			getline(cin, email);
			if (perevirka_emaila(m, email)) {
				cout << "Такий email вже існує!\n";
				pere = putany();
			}
			else {
				pere = false;
				cout << "Ведіть Пароль: ";
				getline(cin, parol);
				m.insert({ email,parol });
			}
		}
	}

	bool login_account() {
		login= true;
		pere = true;
		while (pere) {
			cout << string(40, '+') << "\n";
			cout << "Вхід акаунта!\n";
			cout << "Ведіть емаїл: ";
			getline(cin, email);
			if (!perevirka_emaila(m, email)) {
				cout << "Такий email не існує!\n";
				pere = putany();
			if (pere == false)login == false;
			}
			else {
				pere = false;
				cout << "Ведіть Пароль: ";
				getline(cin, parol);
				m.insert({ email,parol });
			}
		}
		return login;
	}





};

