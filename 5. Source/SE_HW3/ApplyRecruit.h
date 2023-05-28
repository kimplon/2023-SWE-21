#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "CompanyMember.h"
#include "NormalMember.h"
#include "Recruit.h"

using namespace std;

class ApplyRecruitUI;
/*
	Ŭ���� �̸� : ApplyRecruit
	���	  : ä�������� ���� �Ʒ� ��ɵ��� ������
	1. ApplyRecruit : ApplyRecruit�� �����ڷ� ��������� ���� �����ϰ� ä�������� �����ϱ� ���� setControl�Լ��� startInterface�� ȣ���մϴ�.
	2. createApply : ���� ������ �����Ͽ� ���� ���� ����Ʈ�� �ִ� �Լ��Դϴ�.
	3. showRecruit : ä�� ������ �˻��ϴ� �Լ��Դϴ�. ȸ���̸��� �޾Ƽ� ä�������� �˻��ϴ� ������ ��Ĩ�ϴ�.
*/
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