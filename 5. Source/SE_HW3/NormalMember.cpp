#include <iostream>
#include "NormalMember.h"
/*
	�Լ� �̸� : NormalMember::NormalMember
	���	  : NormalMember�� �����ڷ� ������� ���� �Է��մϴ�.
	���� ���� : string id		�Ϲ�ȸ�� ���̵�
			    string password	�Ϲ�ȸ�� ��й�ȣ
			    string memberName  �Ϲ�ȸ�� �̸�
			    int socialSecurityNumber �Ϲ�ȸ�� �ֹι�ȣ
	��ȯ��    : ����
*/
NormalMember::NormalMember(string id, string password, string memberName, int socialSecurityNumber) : Member(id, password) {
	this->memberName = memberName;
	this->socialSecurityNumber = socialSecurityNumber;
}