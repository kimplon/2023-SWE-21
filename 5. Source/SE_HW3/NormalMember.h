#pragma once
#include <string>
#include <vector>
#include "Member.h"

using namespace std;
/*
	Ŭ���� �̸� : NormalMember
	���	  : �Ϲ�ȸ���� ���� ���� �� �Ʒ� ����� ������
	1. NormalMember: NormalMember �����ڷ� ��������� �ʱ�ȭ�Ѵ�.
*/
class NormalMember :public Member {
private:
	std::string memberName;
	int socialSecurityNumber;
public:
	NormalMember(std::string id, std::string password, std::string memberNme, int socailSecurityNumber);
};