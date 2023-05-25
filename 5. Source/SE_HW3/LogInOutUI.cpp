#include "LogInOutUI.h"
#include "LogInOut.h"
/*
	�Լ� �̸� : LogInOutUI::LogInOutUI
	���	  : LogInOutUI �����ڷ� ��������� ���� �����մϴ�.
	���� ���� : ifstream* inputF: ����������� ��ǲ ��ü
				ofstream* outputF: ����������� �ƿ�ǲ ��ü
	��ȯ��    : ����
*/
LogInOutUI::LogInOutUI(ifstream* inputF, ofstream* outputF) : in_fp(inputF), out_fp(outputF) {
}
/*
	�Լ� �̸� : LogInOutUI::setControl
	���	  : Boundary�� Control�� �����ϴ� ����� �����Ѵ�.
	���� ���� : LogInOut* myControl : �α��ξƿ� ��ü
	��ȯ��    : ����
*/
void LogInOutUI::setControl(LogInOut* myControl) {
	control = myControl;
}
/*
	�Լ� �̸� : LogInOutUI::startInterface
	���	  : ����ڿ� ��ȣ�ۿ��ϴ� �������̽��� �����ϴ� �Լ��� ControlŬ������ �α��� / �α׾ƿ� ����� ȣ���Ѵ�.
	���� ���� : int logType  : �α��� �Ǵ� �α׾ƿ� ��� �����ϴ� Ÿ��
				string session:���� �α��� �� ���̵�
	��ȯ��    : ����
*/
void LogInOutUI::startInterface(int logType, string session) {
	string id, pw;

	switch (logType) {
	case 1:
		*out_fp << "2.1. �α���" << "\n";
		enterIDPW(id, pw);
		control->runLogIn(id ,pw);
		break;
	case 2:
		*out_fp << "2.2. �α׾ƿ�" << "\n";
		enterLogOut(session);
		control->runLogOut();
		break;
	}
}
/*
	�Լ� �̸� : LogInOutUI::enterIDPW
	���	  : ���̵�� �н����带 �Է¹޾� �����ϰ� �α��� ����� ����ϴ� ����� �����Ѵ�.
	���� ���� : string &id:���� ���̵�
				string &pw : ���� ��й�ȣ
	��ȯ��    : ����
*/
void LogInOutUI::enterIDPW(string &id, string &pw) {
	string left, right; *in_fp >> left >> right;
	id = left; pw = right;

	*out_fp << "> " << id << " " << pw << "\n";
}
/*
	�Լ� �̸� : LogInOutUI::enterLogOut
	���	  : �α׾ƿ��� ����� ����ϴ� ����� �����Ѵ�.
	���� ���� : string session : ���� �α��� �� ���̵�
	��ȯ��    : ����
*/
void LogInOutUI::enterLogOut(string session) {
	*out_fp << "> " << session << "\n";
}