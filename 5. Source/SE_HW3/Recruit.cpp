#include "Recruit.h"
/*
	�Լ� �̸� : Recruit::Recruit
	���	  : Recruit�� �����ڷ� ��������� �Է��մϴ�.
	���� ���� : string taskType     ����
				int headCount     �ο���
				string deadLine    ä�븶����
				string companyName ȸ���̸�
				int businessNumber ����ڹ�ȣ
	��ȯ��    : ����
*/
Recruit::Recruit(string taskType, int headCount, string deadLine, string companyName, int businessNumber) {
	this->taskType = taskType;
	this->headCount = headCount;
	this->deadline = deadLine;
	this->companyName = companyName;
	this->businessNumber = businessNumber;
}
/*
	�Լ� �̸� : Recruit::getDetail
	���	  : ä���� �ڼ��� ������ �������� �Լ��Դϴ�.
	���� ���� : string &myTaskType    ȸ��ȸ�� ä�����
			   int &myHeadCount	   ȸ��ȸ�� �ο���
			   string &myDeadLine	   ȸ��ȸ�� ������
			   string &myCompanyName ȸ��ȸ�� ȸ���̸�
			   int &myBusinessNumber   ȸ��ȸ�� ����ڹ�ȣ
	��ȯ��    : ����
*/
void Recruit::getDetail(string &myTaskType, int &myHeadCount, string &myDeadLine, string &myCompanyName, int &myBusinessNumber ) {
	myTaskType = taskType;
	myHeadCount = headCount;
	myDeadLine = deadline;
	myCompanyName = companyName;
	myBusinessNumber = businessNumber;
}
/*
	�Լ� �̸� : Recruit::makeApply
	���	  : �Ϲ�ȸ���� ������ �ϰ� ��������Ʈ�� �����ϴ� �Լ��Դϴ�.
	���� ���� : NormalMember* creator : �Ϲ�ȸ�� ��ü
	��ȯ��    : ����
*/
void Recruit::makeApply(NormalMember* creator) {
	applyList.push_back(Apply(companyName, businessNumber, taskType, headCount, deadline, creator));
}
/*
	�Լ� �̸� : Recruit::getApplyList
	���	  : ��������Ʈ�� �������� �Լ��Դϴ�.
	���� ���� : vector<Apply> &list : ���� ����Ʈ
	��ȯ��    : ����
*/
void Recruit::getApplyList(vector<Apply> &list) {
	list = applyList;
}