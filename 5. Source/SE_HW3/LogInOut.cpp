#include "LogInOut.h"
#include "LogInOutUI.h"
/*
	�Լ� �̸� : LogInOut::LogInOut
	���	  : LogInOut �����ڷ� ������� ���� �Է��մϴ�.
	���� ���� : string &thisSession  		:
			LogInOutUI* myui		:
			vector<CompanyMember>& cml :
			vector<NormalMember>& nml  :
			int thisLogType
	��ȯ��    : ����
*/
LogInOut::LogInOut(string &thisSession, LogInOutUI* myui, vector<CompanyMember>& cml, vector<NormalMember>& nml, int thisLogType) : ui(myui), session(thisSession), companyMemberList(cml), normalMemberList(nml), logType(thisLogType) {
	ui->setControl(this);

	ui->startInterface(logType, session);
}
/*
	�Լ� �̸� : LogInOut::runLogIn
	���	  : �α����� �����ϴ� �Լ��Դϴ�.
	���� ���� : string userId :���� ���̵�
				string password : ���� ��й�ȣ
	��ȯ��    : ����
*/
void LogInOut::runLogIn(string userId, string password) {	//  ���ϰ� ������
	
		for (int i = 0; i < companyMemberList.size(); i++) {
			string tempId = companyMemberList[i].getId();
			string tempPw = companyMemberList[i].getPassword();

			if (!userId.compare(tempId) && !password.compare(tempPw)) {
				session = tempId;
			}
		}
	
	
		for (int i = 0; i < normalMemberList.size(); i++) {
			string tempId = normalMemberList[i].getId();
			string tempPw = normalMemberList[i].getPassword();

			if (!userId.compare(tempId) && !password.compare(tempPw)) {
				session = tempId;
			}
		}
	
}
/*
	�Լ� �̸� : LogInOut::runLogOut
	���	  : �α׾ƿ��� �����ϴ� �Լ��� ���ǰ��� ���ϴ�.
	���� ���� : ����
	��ȯ��    : ����
*/
void LogInOut::runLogOut() {
	session = "";
}