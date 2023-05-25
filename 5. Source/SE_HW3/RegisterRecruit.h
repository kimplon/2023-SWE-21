#pragma once
#include <vector>
#include <string>
#include "CompanyMember.h"

class RegisterRecruitUI;

class RegisterRecruit {
private:
	RegisterRecruitUI* ui;
	string session;
	vector<CompanyMember>& memberList;
public:
	RegisterRecruit(RegisterRecruitUI* myRegisterRecruitUI, string &session, vector<CompanyMember>& memberList);
	void createRecruit(string taskType, int headCount, string deadLine);
};