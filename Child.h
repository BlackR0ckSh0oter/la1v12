#pragma once
#include "FamilyTree.h"

class Child : public FamilyTree {
public:
	Child();
	Child(const Child& obj);
	~Child();

	Child& operator= (const Child& other);

	friend ostream& operator<<(ostream&, Child&);
	friend istream& operator>>(istream&, Child&);
	friend ofstream& operator<<(ofstream&, Child&);
	friend ifstream& operator>>(ifstream&, Child&);

	void redact(Child&);
	bool sort(Child& obj, int AGE);
};