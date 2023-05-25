#include "Canceling.h"
#include "CancelingUI.h"
/*
	�Լ� �̸� : CancelingUI::CancelingUI
	���	  : CancelingUI�� �����ڷ� ��������� ���� �����մϴ�.
	���� ���� : ifstream* inputF: ����������� ��ǲ ��ü
			    ofstream* outputF: ����������� �ƿ�ǲ ��ü
	��ȯ��    : ����
*/
CancelingUI::CancelingUI(ifstream* inputF, ofstream* outputF) : in_fp(inputF), out_fp(outputF) {};
/*
	�Լ� �̸� : CancelingUI::setControl
	���	  : Boundary�� Control�� �����ϴ� ����� �����Ѵ�.
	���� ���� : Canceling* myControl : Canceling ��ü
	��ȯ��    : ����
*/
void CancelingUI::setControl(Canceling* myControl) {
	control = myControl;
}
/*
	�Լ� �̸� : CancelingUI::startInterface
	���	  : ȸ��Ż�� ����ϴ� �������̽� �Լ��� enterCancle�Լ��� cancel �Լ��� ȣ���Ѵ�.
	���� ���� : string session : ���� �α��� �� ���̵�
	��ȯ��    : ����
*/
void CancelingUI::startInterface(string session) {
	*out_fp << "1.2. ȸ��Ż��" << "\n";
	enterCancel(session);
	control->cancel();
}
/*
	�Լ� �̸� : CancelingUI::enterCancel
	���	  : Ż��� ���̵� ����ϴ� �Լ��̴�.
	���� ���� : string session : ���� �α��� �� ���̵�
	��ȯ��    : ����
*/
void CancelingUI::enterCancel(string session) {
	*out_fp << "> " << session;
}