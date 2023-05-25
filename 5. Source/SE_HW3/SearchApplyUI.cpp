#include "SearchApplyUI.h"
#include "SearchApply.h"
/*
	�Լ� �̸� : SearchApplyUI::SearchApplyUI
	���	  : SearchApplyUI�� �����ڷ� ��������� ���� �����մϴ�.
	���� ���� : ifstream* inputF  : ����������� ��ǲ ��ü
				ofstream* outputF : ����������� �ƿ�ǲ ��ü
	��ȯ��    : ����
*/
SearchApplyUI :: SearchApplyUI(ifstream* inputF, ofstream* outputF) : in_fp(inputF), out_fp(outputF) {
}
/*
	�Լ� �̸� : SearchApplyUI::startInterface
	���	  : ����ڿ� ��ȣ�ۿ��ϴ� �������̽��� �����ϴ� �Լ��Դϴ�.
	���� ���� : ����
	��ȯ��    : ����
*/
void SearchApplyUI::startInterface() {
	*out_fp << "4.3. ����������ȸ : " << "\n";
	searchApply();
}
/*
	�Լ� �̸� : SearchApplyUI::searchApply
	���	  : ���� ���� ��ȸ ����� �����ϴ� �Լ��� ȣ���Ѵ�.
	���� ���� : ����
	��ȯ��    : ����
*/
void SearchApplyUI :: searchApply() {
	control->showApply();
}
/*
	�Լ� �̸� : SearchApplyUI::showDetail
	���	  : ���� ���� ������ ����ϴ� ����� �����Ѵ�.
	���� ���� : string cname     : ȸ���̸�
				int bnum         :  ����ڹ�ȣ
				string taskType   :  ����
				int headCount    :  �ο���
				string deadLine   : ä�븶����
	��ȯ��    : ����
*/
void SearchApplyUI::showDetail(string cname, int bnum, string taskType, int headCount, string deadLine) {
	*out_fp << "> " << cname << " " << bnum << " " << taskType << " " << headCount << " " << deadLine << "\n";
}
/*
	�Լ� �̸� : SearchApplyUI::setControl
	���	  : Boundary�� Control�� �����ϴ� ����� �����Ѵ�.
	���� ���� : SearchApply* thisControl : SearchApply ��ü�� thisControl�� ������ �� �ֵ��� �ϴ� ����
	��ȯ��    : ����
*/

void SearchApplyUI::setControl(SearchApply* thisControl) {
	control = thisControl;
}