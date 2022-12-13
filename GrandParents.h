#pragma once
#include "FamilyTree.h"

class Grandparents : public FamilyTree {
public:
	Grandparents();
	Grandparents(const Grandparents& obj);
	~Grandparents();

	Grandparents& operator= (const Grandparents& other);

	friend ostream& operator<<(ostream&, Grandparents&);
	friend istream& operator>>(istream&, Grandparents&);
	friend ofstream& operator<<(ofstream&, Grandparents&);
	friend ifstream& operator>>(ifstream&, Grandparents&);

	void redact(Grandparents&);
	bool sort(Grandparents& obj, int AGE);
};
