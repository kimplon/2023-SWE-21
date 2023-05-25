#include <iostream>
#include "RegisterRecruit.h"
#include "RegisterRecruitUI.h"

using namespace std;
/*
	�Լ� �̸� : RegisterRecruit::RegisterRecruit
	���	  : RegisterRecruit�� �����ڷ� ������� ���� �Է��մϴ�.
	���� ���� : RegisterRecruitUI* myRegisterRecruitUI  : RegisterRecruitUI ��ü
				string& thisSession		: ���� �α��� �� ���̵�
				vector<CompanyMember>& myMemberList : ȸ��ȸ�� ����Ʈ
	��ȯ��    : ����
*/
RegisterRecruit::RegisterRecruit(RegisterRecruitUI* myRegisterRecruitUI, string& thisSession, vector<CompanyMember>& myMemberList) : session(thisSession), memberList(myMemberList), ui(myRegisterRecruitUI) {
	ui->setControl(this);

	ui->startInterface();
}

/*
	�Լ� �̸� : RegisterRecruit::createRecruit
	���	  : ä���� ���� �����Ͽ� ȸ�� ȸ���� ����Ʈ�� �Է��մϴ�.
	���� ���� :  string taskType  : ����
				 int headCount  : �ο���
				 string deadLine : ������
	��ȯ��    : ����
*/
void RegisterRecruit::createRecruit(string taskType, int headCount, string deadLine) {
	for (int i = 0; i < memberList.size(); i++) {
		if (!session.compare(memberList[i].getId())) {
			memberList[i].makeRecruit(taskType, headCount, deadLine);
			break;
		}
	}
}