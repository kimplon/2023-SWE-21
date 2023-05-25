#include "SearchRecruit.h"
#include "SearchRecruitUI.h"
/*
	�Լ� �̸� : SearchRecruit::SearchRecruit
	���	  : SearchRecruit�� �����ڷ� ������� ���� �Է��Ѵ�.
	���� ���� : SearchRecruitUI* myUI : ä����ȸUI
				vector<CompanyMember>& myMemberList : ȸ��ȸ�� ����Ʈ
				string& thisSession : ���� �α��� �� ȸ��
	��ȯ��    : ����
*/
SearchRecruit::SearchRecruit(SearchRecruitUI* myUI, vector<CompanyMember>& myMemberList, string& thisSession) : ui(myUI), memberList(myMemberList), session(thisSession) {
	ui->setControl(this);
	ui->startInterface();
}
/*
	�Լ� �̸� :  SearchRecruit::showRecruit
	���	  : ä���������� ������ Bondary�� �Ѱ��� ����� ��û�ϴ� �Լ��Դϴ�.
	���� ���� : string session : ���� �α��� �� ȸ��
	��ȯ��    :  ����
*/

void SearchRecruit::showRecruit() {
	for (int i = 0; i < memberList.size(); i++) {
		if (!session.compare(memberList[i].getId())) {
			vector<Recruit> recruitList;
			memberList[i].getRecruitList(recruitList);

			for (int j = 0; j < recruitList.size(); j++) {
				string myTaskType;
				int myHeadCount;
				string myDeadLine;
				string myCompanyName;
				int myBusinessNumber;

				recruitList[j].getDetail(myTaskType, myHeadCount, myDeadLine, myCompanyName, myBusinessNumber);
				ui->showDetail(myTaskType, myHeadCount, myDeadLine);
			}
			break;
		}
	}
}

