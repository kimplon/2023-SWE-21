#pragma once
#include <iostream>
#include "CompanyMember.h"
#include "Recruit.h"

using namespace std;

class ApplyRecruit {
private:

public:
	ApplyRecruit();
	void createApply(int &bnum);
	void showRecruit(string &cname);
};