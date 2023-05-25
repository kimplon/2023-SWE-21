#include "Apply.h"
/*
	�Լ� �̸� : Apply::Apply
	���	  : Apply�� �����ڷ� ������� ���� �Է��մϴ�.
	���� ���� : string Companyname : ȸ���̸�
				int businessNumber : ����� ��ȣ
				string taskType     :  ����
				int headCount   	: �ο���
				string Deadline	: ä�븶����
				NormalMember* thisCreator : �Ϲ�ȸ�� <������>
	��ȯ��    : ����
*/
Apply::Apply(string Companyname, int businessNumber, string taskType, int headCount, string Deadline, NormalMember* thisCreator) {
	this->companyName = Companyname;
	this->businessNumber = businessNumber;
	this->taskType = taskType;
	this->headCount = headCount;
	this->deadline = Deadline;
	this->creator = thisCreator;
}

/*
	�Լ� �̸� : Apply::getDetail
	���	  : �Ϲ�ȸ���� ä�뿡 ������ ���� ����(ȸ���̸�, ����ڹ�ȣ, ����, �ο���, ä�븶����) �� ���� �ڼ��� ������ �������� �Լ��Դϴ�.
	���� ���� : string &myCompanyName : ������ ȸ���̸�
			   int &myBusinessNumber   : ������ ����� ��ȣ
			   string &myTaskType       : ������ ����
			   int &myHeadCount         : ������ �ο���
			   string &myDeadline         : ������ ä�븶����
	��ȯ��    : ����
*/
void Apply::getDetail(string &myCompanyName, int &myBusinessNumber, string &myTaskType, int &myHeadCount, string &myDeadline) {
	myCompanyName = companyName;
	myBusinessNumber = businessNumber;
	myTaskType = taskType;
	myHeadCount = headCount;
	myDeadline = deadline;
}
/*
	�Լ� �̸� : Apply::getNormalMember
	���	  : ä�뿡 ������ �Ϲ�ȸ��(������)�� ���� ������ ��ȯ�ϴ� �Լ��Դϴ�.
	���� ���� : string &myCompanyName : ������ ȸ���̸�
			   int &myBusinessNumber   : ������ ����� ��ȣ
			   string &myTaskType       : ������ ����
			   int &myHeadCount         : ������ �ο���
			   string &myDeadline         : ������ ä�븶����
	��ȯ��    : NormalMember
*/
NormalMember Apply::getNormalMember() {
	return *creator;
}