#pragma once
#include<string>

using namespace std;
/*
	Ŭ���� �̸� : Member
	���	  : ����� ���� ���� �� �Ʒ� ��ɵ��� ������
	1. Member: Member�� �����ڷ� ������� ���� �Է��մϴ�.
	2. getId: Member�� id���� �������� �Լ��Դϴ�.
	3. getPassword:  Member�� password���� �������� �Լ��Դϴ�.
*/
class Member {
private:
	string id;
	string password;
public:
	Member(string id, string password);
	string getId();
	string getPassword();
};