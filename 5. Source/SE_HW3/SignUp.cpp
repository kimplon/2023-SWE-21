#include "SignUp.h"
#include "SignUpUI.h"

using namespace std;
/*
	�Լ� �̸� : SignUp
	���	  : SignUp�� �����ڷμ� ��� ������ ���� �����Ѵ�.
	���� ���� : SignUpUI* myUI : SignUpUI�� ��ü�̴�.
				vector<CompanyMember>& cml : ȸ��ȸ���� ����
			    vector<NormalMember>& nml : �Ϲ�ȸ���� ����
	��ȯ��    : ����
*/
SignUp::SignUp(SignUpUI* myUI, vector<CompanyMember>& cml, vector<NormalMember>& nml) : ui(myUI), companyMemberList(cml), normalMemberList(nml){
	myUI->setControl(this);

	int memberType; string name; int number; string id; string password;	
	myUI->startInterface(memberType,name,number,id,password);
	createUser(memberType, name, number, id, password);
}
/*
	�Լ� �̸� : checkIdRedundancy
	���	  : ���̵� �ߺ��� Ȯ���ϴ� �Լ��� ȸ�� ����Ʈ�� �̹� �Է��� id ���� �����Ѵٸ� true, ���ٸ� false�� ��ȯ�մϴ�.
	���� ���� : string id : ȸ�� ���̵�
	��ȯ��    : bool
*/
bool SignUp::checkIdRedundancy(string id) {
	for (int i = 0; i < companyMemberList.size(); i++) {
		if (!id.compare(companyMemberList[i].getId())) {
			return true;
		}
	}
	for (int i = 0; i < normalMemberList.size(); i++) {
		if (!id.compare(normalMemberList[i].getId())) {
			return true;
		}
	}
	return false;
}

/*
	�Լ� �̸� : createUser
	���	  : ���� ���� ����� ���ο� ȸ���� ������ ȸ�� ����Ʈ�� �����ϴ� ����� �����Ѵ�.
	���� ���� : int memberType  : ȸ��ȸ��, �Ϲ�ȸ�� �����ϴ� ����
			    string name       : ȸ���̸� �Ǵ� ����� �̸�
			    int number       :  ����� ��ȣ �Ǵ� �ֹι�ȣ
			    string id          :  ���̵�
			    string password   : ��й�ȣ
	��ȯ��    : ����
*/
void SignUp::createUser(int memberType, string name, int number, string id, string password) {
	if (checkIdRedundancy(id)) {
		cout << "err" << "\n";
		return;
	}

	if (memberType == 1) {
		companyMemberList.push_back(CompanyMember(id, password, name, number));
	}
	else {
		normalMemberList.push_back(NormalMember(id, password, name, number));
	}
	
}