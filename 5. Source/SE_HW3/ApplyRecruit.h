#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "CompanyMember.h"
#include "NormalMember.h"
#include "Recruit.h"

using namespace std;

class ApplyRecruitUI;

class ApplyRecruit {
private:
	int inputType;
	ApplyRecruitUI* ui;
	string& session;
	vector<CompanyMember>& companyMemberList;
	vector<NormalMember>& normalMemberList;
public:
	ApplyRecruit(ApplyRecruitUI* myUI, vector<CompanyMember>& cml, vector<NormalMember>& nml, string& thisSession, int thisInputType, string& option);
	void createApply(string cname, int bnum, string& paramTaskType);
	void showRecruit(int optype, string cname);
};