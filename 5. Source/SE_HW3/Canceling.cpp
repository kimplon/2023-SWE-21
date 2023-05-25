#include "Canceling.h"
#include "CancelingUI.h"
/*
	�Լ� �̸� : Canceling::Canceling
	���	  : Canceling�� �����ڷ� ������� ���� �Է��մϴ�.
	���� ���� :
			   string& thisSession : ���� �α��� �� ȸ���� ���̵�
			   CancelingUI* myui  :  cancelingUI�� ��ü�� ����(����)
			   vector<CompanyMember>& cml : ȸ��ȸ�� ����(����Ʈ)
			   vector<NormalMember>& nml   : �Ϲ�ȸ�� ����(����Ʈ)
	��ȯ��    : ����
*/
Canceling::Canceling(string& thisSession, CancelingUI* myui, vector<CompanyMember>& cml, vector<NormalMember>& nml) : session(thisSession), ui(myui), companyMemberList(cml), normalMemberList(nml){
	ui->setControl(this);

	ui->startInterface(session);
}
/*
	�Լ� �̸� : Canceling::cancel
	���	  : ȸ������ �� ����� �� Ÿ�Կ� �ش��ϴ� ����Ʈ���� �����ϴ� �Լ��̴�.
	���� ���� : ����
	��ȯ��    : ����
*/
void Canceling::cancel() {
	for (int i = 0; i < companyMemberList.size(); i++) {
		string tempId = companyMemberList[i].getId();

		if (!tempId.compare(session)) {
			companyMemberList.erase(companyMemberList.begin() + i);
		}
	}
	for (int i = 0; i < normalMemberList.size(); i++) {
		string tempId = normalMemberList[i].getId();

		if (!tempId.compare(session)) {
			normalMemberList.erase(normalMemberList.begin() + i);
		}
	}

	session = "";
}