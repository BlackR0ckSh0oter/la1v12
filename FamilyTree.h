#pragma once
#include "Keeper.h"

class FamilyTree {
protected:
	string FIO;
	string Parent_Knowledge;
	string Spouse_Knowledge;
	string Children_Knowledge;
	string Date_of_Birth;
	string Date_of_Death;
	int age;
public:
	FamilyTree() {}
	virtual ~FamilyTree() {}
};