#include"клас входу .h"

int main() {
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода 
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	tester t;
	t.register_account();
	//t.register_account();




	return 0;
}