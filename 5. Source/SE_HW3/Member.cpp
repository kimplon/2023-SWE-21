#include "Member.h"
/*
	�Լ� �̸� : Member::Member
	���	  : Member�� �����ڷ� ������� ���� �Է��մϴ�.
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
	��ȯ��    : id
*/
string Member::getId() {
	return id;
}
/*
	�Լ� �̸� : Member::getPassword
	���	  : Member�� password���� �������� �Լ��Դϴ�.
	���� ���� : ����
	��ȯ��    : password
*/
string Member::getPassword() {
	return password;
}