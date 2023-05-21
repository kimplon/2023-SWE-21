#pragma once
#include <vector>
#include "RegisterRecruitUI.h"
#include "Member.h"
#include "CompanyMember.h"
#include "NormalMember.h"

class RegisterRecruit {
private:
	RegisterRecruitUI* myRegisterRecruitUI;
	vector<Member> memberList;
public:
	RegisterRecruit();
	void createRecruit(string& taskType, int& headCount, string& deadLine);
};