#pragma once
#include <vector>
#include <algorithm>
#include "CompanyMember.h"
#include "Recruit.h"

using namespace std;

class SearchApplyUI;
/*
	Ŭ���� �̸� : SearchApply
	���	  : ���� ��ȸ�� ���� �Ʒ� ��ɵ��� ������
	1. SearchApply: SearchApply�� �����ڷ� ��������� �ʱ�ȭ�Ѵ�.
	2. showApply: �Ϲ�ȸ���� ���� ������ ȸ���̸� ���� �������� ���ķ� �����ֵ��� �Լ��̴�. ȸ���̸�, ����ڹ�ȣ, ����, �ο���, ������ ������ Boundary�� �Ѱ��ش�.
*/
class SearchApply {
private:
	string& session;
	SearchApplyUI* ui;
	vector<CompanyMember>& memberList;
public:
	SearchApply(string& thisSession, SearchApplyUI* myUI, vector<CompanyMember>& cml);
	void showApply();
};