#include "Member.h"
/*
	�Լ� �̸� : Member::Member
	���	  : Member�� �����ڷ� ��������� ���� �����մϴ�.
	���� ���� : string id	   ��� ���̵�
				string password ��� ��й�ȣ
	��ȯ��    : ����
*/
Member::Member(string id, string password) {
	this->id = id; this->password = password;
}
/*
	�Լ� �̸� : Member::getId
	���	  : Member�� id���� �������� �Լ��Դϴ�.
	���� ���� : ����
	��ȯ��    : string
*/
string Member::getId() {
	return id;
}
/*
	�Լ� �̸� : Member::getPassword
	���	  : Member�� password���� �������� �Լ��Դϴ�.
	���� ���� : ����
	��ȯ��    : string
*/
string Member::getPassword() {
	return password;
}