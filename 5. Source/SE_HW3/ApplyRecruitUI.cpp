#include "ApplyRecruitUI.h"
#include "ApplyRecruit.h"
/*
	�Լ� �̸� : ApplyRecruitUI::ApplyRecruitUI
	���	  : ApplyRecruitUI�� �����ڷ� ��������� ���� �����Ѵ�.
	���� ���� : ifstream* inputF  : ����������� ��ǲ ��ü
			    ofstream* outputF : ����������� �ƿ�ǲ ��ü
	��ȯ��    : ����
*/
ApplyRecruitUI::ApplyRecruitUI(ifstream* inputF, ofstream* outputF) : in_fp(inputF), out_fp(outputF) {
}
/*
	�Լ� �̸� : ApplyRecruitUI::startInterface
	���	  : ����ڿ� ��ȣ�ۿ��� �������̽��� �����Ѵ�.
	���� ���� : string session : ���� �α��� �� ȸ���� ���̵��Դϴ�.
				int inputType : ä�� ������ �˻�����, ä�� ���������� ���� �ɼ� �Ű������̴�.
			    string& cname : ȸ���̸��̴�.
	��ȯ��    : ����
*/
void ApplyRecruitUI::startInterface(string session, int inputType, string& cname) {
	if(inputType == 1){
		*out_fp << "4.1. ä�������˻� :" << "\n";
		searchRecruit(inputType, cname);
	}
	else if (inputType == 2) {
		*out_fp << "4.2. ä������ : " << "\n";
		searchRecruit(inputType, cname);
	}
}
/*
	�Լ� �̸� : ApplyRecruitUI::applyForRecurit
	���	  : ����ڹ�ȣ�� �Է¹޾� Control���� �Ѱ��ָ� ���� ����� �����ϵ��� �ϰ� ����� ����Ѵ�.
	���� ���� : string cname : ȸ���̸�
	��ȯ��    : ����
*/
void ApplyRecruitUI::applyForRecruit(string cname) {
	int businessNumber;	*in_fp >>  businessNumber;
	string taskType;
	control->createApply(cname, businessNumber, taskType);

	*out_fp << "> " << cname << " " << businessNumber << " " << taskType << "\n";
}
/*
	�Լ� �̸� : ApplyRecruitUI::searchRecruit
	���	  : ȸ���̸��� �Է¹޾� Control���� ä������ ��ȸ�� ��û�ϴ� ����� �����Ѵ�.
	���� ���� : int optype: ä�� ������ �˻�����, ä�� ���������� ���� �ɼ� �Ű������̴�.
				string& companyName : ȸ���̸�
	��ȯ��    : ����
*/
void ApplyRecruitUI::searchRecruit(int optype, string& companyName) {
	if(optype == 1) *in_fp >> companyName;
	control->showRecruit(optype, companyName);
}
/*
	�Լ� �̸� : ApplyRecruitUI::showDetail
	���	  : ä�� ������ ���� ������ ������ ����ϴ� ����� �����Ѵ�.
	���� ���� : string taskType : ����  
				int headCount: �ο��� 
				string deadLine:ä�븶���� 
				string companyName :ȸ���̸� 
				int bnumber : ����ڹ�ȣ
	��ȯ��    : ����
*/
void ApplyRecruitUI::showDetail(string taskType, int headCount, string deadLine, string companyName, int bnumber) {
	*out_fp << "> " << companyName << " " << bnumber << " " << taskType << " " << headCount << " " << deadLine << "\n";
}
/*
	�Լ� �̸� : ApplyRecruitUI::setControl
	���	  : ApplyRecruit�� ApplyRecruit ���� ������ ���ִ� ��Ʈ�� �Լ��̴�.
	���� ���� : ApplyRecruit* thisControl : ApplyRecruit�� ��ü�� �����Ѵ�.
	��ȯ��    : ����
*/
void ApplyRecruitUI::setControl(ApplyRecruit* thisControl) {
	control = thisControl;
}