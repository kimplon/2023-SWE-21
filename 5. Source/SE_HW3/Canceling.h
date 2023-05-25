#pragma once
#include <string>
#include <vector>
#include "CompanyMember.h"
#include "NormalMember.h"

using namespace std;

class CancelingUI;

class Canceling {
private:
	CancelingUI* ui;
	string session;
	vector<CompanyMember> companyMemberList;
	vector<NormalMember> normalMemberList;
public:
	Canceling(string& thisSession, CancelingUI* myui, vector<CompanyMember>& cml, vector<NormalMember>& nml);
	void cancel();
};