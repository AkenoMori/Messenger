#include <iostream>
#include <string>
using namespace std;


template <typename T> class Register
{
public:
	Register() {
		cout << "����������� | ������� �����:\n";
		cin >> log;
		system("cls");
		cout << "����������� | ������� ������:\n";
		cin >> pass;
		system("cls");
		cout << "����������� | ������� ���� ���:\n";
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
			cout << "����������� | ������� �����:\n";
			cin >> _log;
			cout << "����������� | ������� ������:\n";
			cin >> _pass;
			if (_log == log && _pass == pass) {
				printf("����������� ������� ��������� " << endl);
			}
			else
			{
				printf("�������� ����� ��� ������!" << endl);
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
	cout << "1. ������ �����������. | 2. ��������� ���� � �������:\n";
	cin >> select;
	system("cls");
	 
	if (select == 1)
		Register<string> p1;

	else
		_Login::Login<string> p2;
	
	

	return 0;



}