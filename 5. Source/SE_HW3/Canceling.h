#pragma once
#include <string>
#include <vector>
#include "CompanyMember.h"
#include "NormalMember.h"

using namespace std;

class CancelingUI;
/*
	Ŭ���� �̸� : Canceling
	���	  : ȸ��Ż�� ��ɿ� ���� �Ʒ� ��ɵ��� ������
	1. Canceling: Canceling�� �����ڷ� ������� ���� �Է��մϴ�.
	2. cancel: ���� �α��� ���� session�� ȸ�� ����Ʈ�� ���� �ش��ϴ� ȸ���� ������ �����ϴ� ����� �����Ѵ�.
*/
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