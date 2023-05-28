#pragma once
#include <vector>
#include "CompanyMember.h"
#include "NormalMember.h"

class LogInOutUI;
/*
	Ŭ���� �̸� : LogInOut
	���	  : �α���, �ƿ��� ���� �Ʒ� ��ɵ��� ������
	1. LogInOut: LogInOut �����ڷ� ������� ���� �Է��մϴ�.
	2. runLogIn: ����ڷκ��� id�� ��й�ȣ�� �Է¹޾Ƽ� companyMemberList���� ���� ��, �α����� �����ϴ� �Լ��Դϴ�.
	3. runLogOut: �α׾ƿ��� �����ϴ� �Լ��� ���ǰ��� ���ϴ�.
*/
class LogInOut {
private:
	int logType;
	string& session;
	LogInOutUI* ui;
	vector<CompanyMember>& companyMemberList;
	vector<NormalMember>& normalMemberList;
public:
	LogInOut(string &thisSession, LogInOutUI *myui, vector<CompanyMember> &cml, vector<NormalMember>& nml, int logType);
	void runLogIn(string userId, string password);	// ���ϰ� ���� ����
	void runLogOut();
};