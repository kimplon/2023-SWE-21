#include "RegisterRecruitUI.h"
#include "RegisterRecruit.h"
/*
	�Լ� �̸� : RegisterRecruitUI::RegisterRecruitUI
	���	  : RegisterRecruitUI�� �����ڷ� ������� ���� �Է��մϴ�.
	���� ���� : ifstream* inputF: ����������� ��ǲ ��ü
				ofstream* outputF: ����������� �ƿ�ǲ ��ü
	��ȯ��    : ����
*/
RegisterRecruitUI::RegisterRecruitUI(ifstream* inputF, ofstream* outputF) : in_fp(inputF), out_fp(outputF) {
}
/*
	�Լ� �̸� : RegisterRecruitUI::startInterface
	���	  : ����ڿ� ��ȣ�ۿ��ϴ� �������̽��� �����Ű�� �Լ��Դϴ�.
	���� ���� : ����
	��ȯ��    : ����
*/
void RegisterRecruitUI::startInterface() {
	*out_fp << "3.1. ä������ ��� :" << "\n";
	string taskType; int headCount; string deadLine;
	enterDetails(taskType, headCount, deadLine);
	control->createRecruit(taskType, headCount, deadLine);
}
/*
	�Լ� �̸� : RegisterRecruitUI::enterDetails
	���	  : ä���� ���� �����ϱ����� ���� �������� �Է¹޴� �Լ��Դϴ�.
	���� ���� : string& type  : ����
				int& count   :	�ο���
				string& time : ������
	��ȯ��    : ����
*/
void RegisterRecruitUI::enterDetails(string& type, int& count, string& time) {
	string taskType; int headCount; string deadLine;

	*in_fp >> taskType >> headCount >> deadLine;
	*out_fp << "> " << taskType << " " << headCount << " " << deadLine << "\n";

	type = taskType; count = headCount; time = deadLine;
}
/*
	�Լ� �̸� : RegisterRecruitUI::setControl
	���	  : Boundary�� Control�� �����ϴ� ����� �����Ѵ�.
	���� ���� : RegisterRecruit* myControl : RegisterRecruit ��ü
	��ȯ��    : ����
*/
void RegisterRecruitUI::setControl(RegisterRecruit* myControl) {
	control = myControl;
}