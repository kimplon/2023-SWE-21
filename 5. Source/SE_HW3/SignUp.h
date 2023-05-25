#pragma once
#include <vector>
#include "Member.h"
#include "CompanyMember.h"
#include "NormalMember.h"

class SignUpUI;

class SignUp {
private:
	SignUpUI* ui;
	vector<CompanyMember>& companyMemberList;
	vector<NormalMember>& normalMemberList;
public:
	SignUp(SignUpUI* myUI, vector<CompanyMember>& cml, vector<NormalMember>& nml);
	bool checkIdRedundancy(string id);
	void createUser(int memberType, string name, int number, string id, string password);
};