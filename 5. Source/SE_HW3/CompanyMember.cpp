#include <iostream>
#include "CompanyMember.h"

/*
	�Լ� �̸� : CompanyMember::CompanyMember
	���	  : CompanyMember�� �����ڷ� ��������� ���� �����մϴ�.
	���� ���� : string id		: ȸ��ȸ�� ���̵�
		 	    string password	: ȸ��ȸ�� ��й�ȣ
		 	    string companyName  : ȸ���̸�
			    int businessNumber   : ����� ��ȣ
	��ȯ��    : ����
*/
CompanyMember::CompanyMember(string id, string password, string companyName, int businessNumber) : Member(id, password) {
	this->companyName = companyName;
	this->businessNumber = businessNumber;
}
/*
	�Լ� �̸� : CompanyMember::getCompanyName
	���	  : ȸ��ȸ���� ȸ���̸��� �������� �Լ��Դϴ�.
	���� ���� : ����
	��ȯ��    : string
*/
string CompanyMember::getCompanyName() {
	return companyName;
}
/*
	�Լ� �̸� : CompanyMember:::makeRecruit
	���	  : �޾ƿ� ������ ���� ���ο� ä�� ������ �����ؼ� ����Ʈ�� �����ϴ� ����� �����Ѵ�.
	���� ���� : string taskType : ����
		   	    int headCount  : �ο���
			    string deadLine : ������
	��ȯ��    : ����
*/
void CompanyMember::makeRecruit(string taskType, int headCount, string deadLine) {
	Recruit myRecruit = Recruit(taskType, headCount, deadLine, companyName, businessNumber);
	recruitList.push_back(myRecruit);
}
/*
	�Լ� �̸� : CompanyMember::getRecruitList
	���	  : ���� ���� ���� �� ȸ�� ȸ���� ����� ä�� ���� ����Ʈ�� �Ѱ��ִ� ����� �����Ѵ�.
	���� ���� : vector<Recruit>& list : ä�� ����Ʈ
	��ȯ��    : ����
*/
void CompanyMember::getRecruitList(vector<Recruit>& list) {
	list = recruitList;
}
/*
	�Լ� �̸� : CompanyMember::setRecruitList
	���	  : ������ ä�� ���� ����Ʈ�� ��ȭ�� ������ �� �̸� ������ �ݿ��ϴ� ����� �����Ѵ�.
	���� ���� : vector<Recruit>& list : ä�� ����Ʈ
	��ȯ��    : ����
*/
void CompanyMember::setRecruitList(const vector<Recruit>& list) {
	recruitList = list;
}