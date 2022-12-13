#include <iostream>
#include "Keeper.h"
#include "Child.h"
#include "Grandparents.h"
#include "Parents.h"

using namespace std;

template <typename T>
void Menu(T& obj, string s) {
	int menu;
	int index;
	int flag = 1;
	while (flag) {
		system("cls");
		cout << "1 - Добавить человека" << endl;
		cout << "2 - Удалить человека" << endl;
		cout << "3 - Чтение из файла" << endl;
		cout << "4 - Сохранение информации в файл" << endl;
		cout << "5 - Показать всю информацию" << endl;
		cout << "6 - Редактирование" << endl;
		cout << "7 - Поиск по возрасту в диапазоне значений" << endl;
		cout << "8 - Выход" << endl;
		cout << "Введите номер: ";
		cin >> menu;
		switch (menu) {
		case 1:
			obj.add();
			system("pause");
			break;
		case 2:
			obj.print();
			cout << "Введите номер удаляемого объекта: ";
			cin >> index;
			obj.del(index);
			system("pause");
			break;
		case 3:
			obj.read(s);
			system("pause");
			break;
		case 4:
			obj.save(s);
			system("pause");
			break;
		case 5:
			obj.print();
			system("pause");
			break;
		case 6:
			obj.print();  
			cout << "Введите номер редактируемого объекта: "; 
			cin >> index;  
			obj.redaction(index); 
			system("pause"); 
			break;
		case 7:
			obj.sort_AGE();
			system("pause");
			break;
		case 8:
			flag = 0;
			break;
		default: 
			cout << "Error!" << endl;
			system("pause");
			break;
		}
	}
}

int main()
{
	system("chcp 1251");
	setlocale(LC_ALL, "Russian");
	Keeper<Grandparents> ob1;
	Keeper<Parents> ob2;
	Keeper<Child> ob3;
	int menu;
	int flag = 1;
	while (flag) {
		system("cls");
		cout << "1 - Бабушка и дедушка." << endl;
		cout << "2 - Родители." << endl;
		cout << "3 - Ребенок." << endl;
		cout << "4 - Выход." << endl;
		cout << "Введите пункт: ";
		cin >> menu;
		switch (menu) {
		case 1: 
			Menu(ob1, "Grandparents.txt"); 
			return 0;
			break;
		case 2: 
			Menu(ob2, "Parents.txt");
			break;
		case 3: 
			Menu(ob3, "Child.txt"); 
			break;
		case 4: 
			flag = 0; 
			break;
		default: cout << "Ошибка" << endl; 
			system("pause"); 
			break;
		}
	}
}
