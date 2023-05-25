#include "SignUpUI.h"
#include "SignUp.h"
/*
	�Լ� �̸� : SignUpUI::SignUpUI
	���	  : SignUpUI�� �����ڷ� ��� ���� ���� �Է��մϴ�.
	���� ���� : ifstream* inputF: ����������� ��ǲ ��ü
				ofstream* outputF: ����������� �ƿ�ǲ ��ü
	��ȯ��    : ����
*/
SignUpUI::SignUpUI(ifstream* inputF, ofstream* outputF) : in_fp(inputF), out_fp(outputF) {
}
/*
	�Լ� �̸� :   SignUpUI::startInterface
	���	  : ����ڿ� ��ȣ�ۿ��ϴ� �������̽��� �����Ű�� �Լ��Դϴ�.
	���� ���� : int& memberType  :���Ÿ��
				string& name  :�̸�
				int& number : ��ȣ
				string& id :���̵�
				string& password : ��й�ȣ
	��ȯ��    : ����
*/
void SignUpUI::startInterface(int& memberType, string& name, int& number, string& id, string& password) {
	*out_fp << "1.1. ȸ������ :" << "\n";
	enterDefaultInfo(memberType, name, number, id, password);
}
/*
	�Լ� �̸� :  SignUpUI::enterDefaultInfo
	���	  : ȸ�������� �� �������� �Է¹ް� ��������� �� ��ü�� �����ϴ� �Լ��Դϴ�.
	���� ���� : int &type : ��� Ÿ��
				string &na : �̸�
				int &num : ��ȣ
				string &ids : ���̵�
				string &pw : ��й�ȣ
	��ȯ��    : ����
*/
void SignUpUI::enterDefaultInfo(int &type, string &userName, int &num, string &userId, string &pw) {
	int memberType; string name; int number; string id; string password;

	*in_fp >> memberType >> name >> number>> id >> password;
	*out_fp << "> " << memberType << " " << name << " " << number << " " << id << " " << password << "\n";

	type = memberType; userName = name; num = number; userId = id; pw = password;
}
/*
	�Լ� �̸� :   SignUpUI::setControl
	���	  : Boundary�� Control�� �����ϴ� ����� �����Ѵ�.
	���� ���� : SignUp* thisControl : SignUp ��ü
	��ȯ��    : ����
*/

void SignUpUI::setControl(SignUp* thisControl) {
	control = thisControl;
}