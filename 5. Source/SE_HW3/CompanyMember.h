#pragma once
#include <string>
#include <vector>
#include "Member.h"
#include "Recruit.h"

using namespace std;
/*
	Ŭ���� �̸� : CompanyMember
	���	  : ȸ�� ȸ���� ������ Ŭ������, �Ʒ��� ���� ��ɵ��� ������
	1. CompanyMember: CompanyMember�� �����ڷ� ������� ���� �Է��մϴ�.
	2. getCompanyName: ȸ��ȸ���� ȸ���̸��� �������� �Լ��Դϴ�.
	3. makeRecruit: ä���� ���� ä�� ���� ����Ʈ�� ����ϴ� �Լ��Դϴ�.
	4. getRecruitList: ���� ���� ���� �� ȸ�� ȸ���� ����� ä�� ���� ����Ʈ�� �Ѱ��ִ� ����� �����Ѵ�.
	5. setRecruitList: ������ ä�� ���� ����Ʈ�� ��ȭ�� ������ �� �̸� ������ �ݿ��ϴ� ����� �����Ѵ�.
*/
class CompanyMember :public Member {
private:
	std::string companyName;
	int businessNumber;
	vector<Recruit> recruitList;
public:
	CompanyMember(std::string id, std::string password, std::string companyName, int businessNumber);
	std::string getCompanyName();
	void makeRecruit(string taskType, int headCount, string deadLine);
	void getRecruitList(vector<Recruit>& list);
	void setRecruitList(const vector<Recruit>& list);
};