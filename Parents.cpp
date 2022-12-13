#include "Parents.h"

Parents::Parents() {
	FIO = "Нет данных";
	Parent_Knowledge = "Нет данных";
	Spouse_Knowledge = "Нет данных";
	Children_Knowledge = "Нет данных";
	Date_of_Birth = "Нет данных";
	Date_of_Death = "Нет данных";
	age = 0;
}

Parents::Parents(const Parents& obj) {
	*this = obj;
}

Parents::~Parents() {}

Parents& Parents::operator=(const Parents& other) {
	this->FIO = other.FIO;
	this->Parent_Knowledge = other.Parent_Knowledge;
	this->Children_Knowledge = other.Children_Knowledge;
	this->Spouse_Knowledge = other.Spouse_Knowledge;
	this->Date_of_Birth = other.Date_of_Birth;
	this->Date_of_Death = other.Date_of_Death;
	this->age = other.age;
	return *this;
}

istream& operator>>(istream& in, Parents& obj) {
	cout << "Введите ФИО: ";
	getchar();
	getline(in, obj.FIO);

	cout << "Введите Знание о родителях: ";
	/*getchar();*/
	getline(in, obj.Parent_Knowledge);

	cout << "Введите Знание о супруге: ";
	/*getchar();*/
	getline(in, obj.Spouse_Knowledge);

	cout << "Введите Знание о детях: ";
	/*getchar();*/
	getline(in, obj.Children_Knowledge);

	cout << "Введите Дату Рождения: ";
	in >> obj.Date_of_Birth;

	cout << "Введите Дату смерти: ";
	in >> obj.Date_of_Death;

	cout << "Введите возраст: ";
	in >> obj.age;

	return in;
}

ostream& operator<<(ostream& out, Parents& obj) {
	out << "ФИО: " << obj.FIO << endl;
	out << "Знание о родителях: " << obj.Parent_Knowledge << endl;
	out << "Знание о супруге: " << obj.Spouse_Knowledge << endl;
	out << "Знание о детях: " << obj.Children_Knowledge << endl;
	out << "Дата Рождения: " << obj.Date_of_Birth << endl;
	out << "Дата Смерти: " << obj.Date_of_Death << endl;
	out << "Возраст: " << obj.age << endl;
	return out;
}

ofstream& operator<<(ofstream& fout, Parents& obj)
{
	fout << obj.FIO << endl;
	fout << obj.Parent_Knowledge << endl;
	fout << obj.Spouse_Knowledge << endl;
	fout << obj.Children_Knowledge << endl;
	fout << obj.Date_of_Birth << endl;
	fout << obj.Date_of_Death << endl;
	fout << obj.age << endl;
	return fout;
}

ifstream& operator>>(ifstream& fin, Parents& obj)
{
	fin.get();
	getline(fin, obj.FIO);
	getline(fin, obj.Parent_Knowledge);
	getline(fin, obj.Spouse_Knowledge);
	getline(fin, obj.Children_Knowledge);
	fin >> obj.Date_of_Birth;
	fin >> obj.Date_of_Death;
	fin >> obj.age;
	fin.get();
	return fin;
}

void Parents::redact(Parents& obj)
{
	int index;
	cout << "Что вы хотите редактировать (1-7): " << endl;
	cin >> index;
	switch (index)
	{
	case 1:
		cout << "Введите ФИО: ";
		getchar();
		getline(cin, obj.FIO); break;
	case 2:
		cout << "Введите знание о родителях: ";
		getchar();
		getline(cin, obj.Parent_Knowledge); break;
	case 3:
		cout << "Введите знание о супруге: ";
		getchar();
		getline(cin, obj.Spouse_Knowledge); break;
	case 4:
		cout << "Введите знание о детях: ";
		getchar();
		getline(cin, obj.Children_Knowledge); break;
	case 5:
		cout << "Введите дату рождения: ";
		cin >> obj.Date_of_Birth; break;
	case 6:
		cout << "Введите дату сметри: ";
		cin >> obj.Date_of_Death; break;
	case 7:
		cout << "Введите возраст: ";
		cin >> obj.age; break;
	default:
		break;
	}
}

bool Parents::sort(Parents& obj, int AGE)
{
	return obj.age == AGE;
}
