#pragma once
#include <vector>
#include "CompanyMember.h"
#include "NormalMember.h"

class LogInOutUI;

class LogInOut {
private:
	int logType;
	string& session;
	LogInOutUI* ui;
	vector<CompanyMember>& companyMemberList;
	vector<NormalMember>& normalMemberList;
public:
	LogInOut(string &thisSession, LogInOutUI *myui, vector<CompanyMember> &cml, vector<NormalMember>& nml, int logType);
	void runLogIn(string userId, string password);	// 리턴값 변경 주의
	void runLogOut();
};