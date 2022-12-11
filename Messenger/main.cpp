#include <iostream>
#include <string>
using namespace std;


template <typename T> class Register
{
public:
	Register() {
		cout << "Регистрация | Введите логин:\n";
		cin >> log;
		system("cls");
		cout << "Регистрация | Введите пароль:\n";
		cin >> pass;
		system("cls");
		cout << "Регистрация | Введите свое имя:\n";
		cin >> name;
		system("cls");


	}


protected:
	T log;
	T pass;
	T name;

};
namespace _Login {
	template <typename T> class Login : public Register<T>
	{
	public:
		Login() {
			cout << "Авторизация | Введите логин:\n";
			cin >> _log;
			cout << "Авторизация | Введите пароль:\n";
			cin >> _pass;
			if (_log == log && _pass == pass) {
				printf("Авторизация успешно выполнена " << endl);
			}
			else
			{
				printf("Неверный логин или пароль!" << endl);
			}
		}
	protected:
		T _log;
		T _pass;

	};
}




int main() {
	setlocale(LC_ALL, "");
	int select;
	cout << "1. Пройти регистрацию. | 2. Выполнить вход в систему:\n";
	cin >> select;
	system("cls");
	 
	if (select == 1)
		Register<string> p1;

	else
		_Login::Login<string> p2;
	
	

	return 0;



}
