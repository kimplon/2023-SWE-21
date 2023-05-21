#pragma once
#include <vector>
#include "SignUpUI.h"
#include "Member.h"
#include "CompanyMember.h"
#include "NormalMember.h"

class SignUp {
private:
	SignUpUI* myUI;
	vector<Member> memberList;
public:
	SignUp(vector<Member> &memberList);
	bool checkIdRedundancy(string id);
	void createUser(int memberType, string name, int number, string id, string password);
};