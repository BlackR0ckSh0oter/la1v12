#include "Child.h"

Child::Child() {
	FIO = "��� ������";
	Parent_Knowledge = "��� ������";
	Spouse_Knowledge = "��� ������";
	Children_Knowledge = "��� ������";
	Date_of_Birth = "��� ������";
	Date_of_Death = "��� ������";
	age = 0;
}

Child::Child(const Child& obj) {
	*this = obj;
}

Child::~Child() {}

Child& Child::operator=(const Child& other) {
	this->FIO = other.FIO;
	this->Parent_Knowledge = other.Parent_Knowledge;
	this->Children_Knowledge = other.Children_Knowledge;
	this->Spouse_Knowledge = other.Spouse_Knowledge;
	this->Date_of_Birth = other.Date_of_Birth;
	this->Date_of_Death = other.Date_of_Death;
	this->age = other.age;
	return *this;
}

ostream& operator<<(ostream& out, Child& obj) {
	out << "���: " << obj.FIO << endl;
	out << "������ � ���������: " << obj.Parent_Knowledge << endl;
	out << "������ � �������: " << obj.Spouse_Knowledge << endl;
	out << "������ � �����: " << obj.Children_Knowledge << endl;
	out << "���� ��������: " << obj.Date_of_Birth << endl;
	out << "���� ������: " << obj.Date_of_Death << endl;
	out << "�������: " << obj.age << endl;
	return out;
}

istream& operator>>(istream& in, Child& obj) {
	cout << "������� ���: ";
	getchar();
	getline(in, obj.FIO);

	cout << "������� ������ � ���������: ";
	/*getchar();*/
	getline(in, obj.Parent_Knowledge);

	cout << "������� ������ � �������: ";
	/*getchar();*/
	getline(in, obj.Spouse_Knowledge);

	cout << "������� ������ � �����: ";
	/*getchar();*/
	getline(in, obj.Children_Knowledge);

	cout << "������� ���� ��������: ";
	in >> obj.Date_of_Birth;

	cout << "������� ���� ������: ";
	in >> obj.Date_of_Death;

	cout << "������� �������: ";
	in >> obj.age;

	return in;
}

ofstream& operator<<(ofstream& fout, Child& obj) {
	fout << obj.FIO << endl;
	fout << obj.Parent_Knowledge << endl;
	fout << obj.Spouse_Knowledge << endl;
	fout << obj.Children_Knowledge << endl;
	fout << obj.Date_of_Birth << endl;
	fout << obj.Date_of_Death << endl;
	fout << obj.age << endl;
	return fout;
}

ifstream& operator>>(ifstream& fin, Child& obj)
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

void Child::redact(Child& obj)
{
	int index;
	cout << "��� �� ������ ������������� (1-7): " << endl;
	cin >> index;
	switch (index)
	{
	case 1:
		cout << "������� ���: ";
		getchar();
		getline(cin, obj.FIO); break;
	case 2:
		cout << "������� ������ � ���������: ";
		getchar();
		getline(cin, obj.Parent_Knowledge); break;
	case 3:
		cout << "������� ������ � �������: ";
		getchar();
		getline(cin, obj.Spouse_Knowledge); break;
	case 4:
		cout << "������� ������ � �����: ";
		getchar();
		getline(cin, obj.Children_Knowledge); break;
	case 5:
		cout << "������� ���� ��������: ";
		cin >> obj.Date_of_Birth; break;
	case 6:
		cout << "������� ���� ������: ";
		cin >> obj.Date_of_Death; break;
	case 7:
		cout << "������� �������: ";
		cin >> obj.age; break;
	default:
		break;
	}
}

bool Child::sort(Child& obj, int AGE)
{
	return obj.age == AGE;
}