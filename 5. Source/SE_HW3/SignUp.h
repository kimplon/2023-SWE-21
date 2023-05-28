#pragma once
#include <vector>
#include "Member.h"
#include "CompanyMember.h"
#include "NormalMember.h"

class SignUpUI;
/*
	Ŭ���� �̸� : SignUp
	���	  : ȸ�����Կ� ���� �Ʒ� ��ɵ��� ������
	1. SignUp: SignUp�� �����ڷμ� ��� ���� ���� �Է��Ѵ�.
	2. checkIdRedundancy: ���̵� �ߺ��� Ȯ���ϴ� �Լ��� ȸ�� ����Ʈ�� �̹� �Է��� id ���� �����Ѵٸ� true, ���ٸ� false�� ��ȯ�մϴ�.
	3. createUser: ���Ÿ��, �̸�, ��ȣ, ���̵�, ��й�ȣ�� �Ű������� �޾Ƽ� ���̵� ������ ��,ȸ�� ��Ͽ� �� ȸ���� ���� �߰����ִ� ����Դϴ�.
*/
class SignUp {
private:
	SignUpUI* ui;
	vector<CompanyMember>& companyMemberList;
	vector<NormalMember>& normalMemberList;
public:
	SignUp(SignUpUI* myUI, vector<CompanyMember>& cml, vector<NormalMember>& nml);
	bool checkIdRedundancy(string id);
	void createUser(int memberType, string name, int number, string id, string password);
};