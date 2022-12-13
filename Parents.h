#pragma once
#include "FamilyTree.h"

class Parents : public FamilyTree {
public:
	Parents();
	Parents(const Parents& obj);
	~Parents();

	Parents& operator= (const Parents& other);

	friend ostream& operator<<(ostream&, Parents&);
	friend istream& operator>>(istream&, Parents&);
	friend ofstream& operator<<(ofstream&, Parents&);
	friend ifstream& operator>>(ifstream&, Parents&);

	void redact(Parents&);
	bool sort(Parents& obj, int AGE);
};
