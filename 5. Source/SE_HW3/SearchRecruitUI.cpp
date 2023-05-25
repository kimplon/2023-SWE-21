#include "SearchRecruitUI.h"
#include "SearchRecruit.h"
/*
	�Լ� �̸� : SearchRecruitUI::SearchRecruitUI
	���	  : SearchRecruitUI�� �����ڷ� ������� ���� �Է��Ѵ�.
	���� ���� : ifstream* inputF: ����������� ��ǲ ��ü
				ofstream* outputF: ����������� �ƿ�ǲ ��ü
	��ȯ��    : ����
*/
SearchRecruitUI::SearchRecruitUI(ifstream* inputF, ofstream* outputF) : in_fp(inputF), out_fp(outputF) {
}
/*
	�Լ� �̸� :   SearchRecruitUI::startInterface
	���	  : ����ڿ� ��ȣ�ۿ��ϴ� �������̽��� �����Ű�� �Լ��Դϴ�.
	���� ���� : string session : ���� �α��� �� ȸ��ȸ�� ���̵�
	��ȯ��    : ����
*/
void SearchRecruitUI::startInterface() {
	*out_fp << "3.2. ��ϵ� ä�� ���� ��ȸ" << "\n";
	searchRecruit();
}
/*
	�Լ� �̸� : SearchRecruitUI::searchRecruit
	���	  : ä��������ȸ�� ���� showResult�Լ��� ȣ���մϴ�.
	���� ���� : string session : ���� �α��� �� ȸ��ȸ�� ���̵�
	��ȯ��    : ����
*/
void SearchRecruitUI::searchRecruit() {
	control->showRecruit();
}
/*
	�Լ� �̸� :  SearchRecruitUI::setControl
	���	  : Boundary�� Control�� �����ϴ� ����� �����Ѵ�.
	���� ���� : SearchRecruit* thisControl : SearchRecruit ��ü
	��ȯ��    : bool(false, true)
*/
void SearchRecruitUI::setControl(SearchRecruit* thisControl) {
	control = thisControl;
}
/*
	�Լ� �̸� : SearchRecruitUI::showDetail
	���	  : ä������ ��ȸ���� �ڼ��� ������ ����ϴ� ����� �����մϴ�.
	���� ���� : string taskType : ����
				int headCount  :�ο���
				string deadLine : ������
	��ȯ��    : ����
*/
void SearchRecruitUI::showDetail(string taskType, int headCount, string deadLine) {
	*out_fp << "> " << taskType << " " << headCount << " " << deadLine << "\n";
}