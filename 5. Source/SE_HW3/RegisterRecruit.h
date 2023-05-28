#pragma once
#include <vector>
#include <string>
#include "CompanyMember.h"

class RegisterRecruitUI;
/*
	Ŭ���� �̸� : RegisterRecruit
	���	  : ä���Ͽ� ���� �Ʒ� ��ɵ��� ������
	1. RegisterRecruit: RegisterRecruit�� �����ڷ� ������� ���� �Է��մϴ�.
	2. createRecruit: ä���� ���� �����Ͽ� ȸ�� ȸ���� ����Ʈ�� �Է��մϴ�.
*/
class RegisterRecruit {
private:
	RegisterRecruitUI* ui;
	string session;
	vector<CompanyMember>& memberList;
public:
	RegisterRecruit(RegisterRecruitUI* myRegisterRecruitUI, string &session, vector<CompanyMember>& memberList);
	void createRecruit(string taskType, int headCount, string deadLine);
};